#include "ApplicationInterface.h"

ApplicationInterface* ApplicationInterface::m_CurrentApplication;

void ApplicationInterface::Run()
{
    if (!m_Running && !InitializeSubsystems())
        return;

    // Main loop variables
    float lastFrameTime = 0.0f;

    OnInit();

    // Main loop
    while (m_Running && !glfwWindowShouldClose(m_Window)) {
        // Calculate delta time
        auto currentTime = static_cast<float>(glfwGetTime());
        float deltaTime = currentTime - lastFrameTime;
        lastFrameTime = currentTime;

        // Poll for events
        glfwPollEvents();

        // Update application state
        OnUpdate(deltaTime);

        // Render frame
        OnRender();

        // Swap buffers
        glfwSwapBuffers(m_Window);
    }

    // Cleanup
    Shutdown();
}

bool ApplicationInterface::InitializeSubsystems()
{
    // Initialize GLFW
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return false;
    }

    // Set GLFW window hints (OpenGL version, profile, etc.)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_SAMPLES, 4); // Enable multisampling for anti-aliasing

    // Create a GLFW window
    m_Window = glfwCreateWindow(m_Width, m_Height, m_Title.c_str(), nullptr, nullptr);
    if (!m_Window)
    {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return false;
    }

    // Make the window's context current
    glfwMakeContextCurrent(m_Window);

    // Initialize GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        glfwDestroyWindow(m_Window);
        glfwTerminate();
        return false;
    }

    // Set user pointer to this instance for callbacks
    glfwSetWindowUserPointer(m_Window, this);
    // For the joystick callback it was needed this little hack
    m_CurrentApplication = this;

    glfwSetErrorCallback(error_callback);
    glfwSetFramebufferSizeCallback(m_Window, this->framebuffer_size_callback);
    glfwSetKeyCallback(m_Window, key_callback);
    //glfwSetCharCallback(m_Window, character_callback);
    glfwSetCursorPosCallback(m_Window, cursor_position_callback);
    //glfwSetCursorEnterCallback(m_Window, cursor_enter_callback);
    glfwSetMouseButtonCallback(m_Window, mouse_button_callback);
    glfwSetScrollCallback(m_Window, scroll_callback);
    //glfwSetJoystickCallback(joystick_callback);
    //glfwSetDropCallback(m_Window, (GLFWdropfun)drop_callback);

    // Set up vsync
    glfwSwapInterval(1);

    glfwMaximizeWindow(m_Window);

    // Get initial framebuffer size
    glfwGetFramebufferSize(m_Window, &m_Width, &m_Height);
    glViewport(0, 0, m_Width, m_Height);

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    m_Running = true;

    // Call derived class initialization
    return OnInit();
}

void ApplicationInterface::Shutdown()
{
    if (m_Running)
    {
        // Call derived class shutdown
        OnShutdown();

        // Clean up GLFW
        if (m_Window)
        {
            glfwDestroyWindow(m_Window);
            m_Window = nullptr;
        }
        glfwTerminate();
        m_Running = false;
    }
}

void ApplicationInterface::error_callback(int error, const char* description)
{
    std::cerr << "GLFW Error (" << error << "): " << description << std::endl;
}

void ApplicationInterface::framebuffer_size_callback(GLFWwindow* window, int width, int height)
{

    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnResize(window, width, height);
}

void ApplicationInterface::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnKeyEvent(window, key, scancode, action, mods);
}

void ApplicationInterface::character_callback(GLFWwindow* window, unsigned int codepoint)
{
    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnCharacterEvent(window, codepoint);
}

void ApplicationInterface::cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{
    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnMouseMove(window, xpos, ypos);
}

void ApplicationInterface::cursor_enter_callback(GLFWwindow* window, int entered)
{
    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnMouseEnter(window, entered);
}

void ApplicationInterface::mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnMouseButton(window, button, action, mods);
}

void ApplicationInterface::scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnMouseScroll(window, xoffset, yoffset);
}

void ApplicationInterface::joystick_callback(int jid, int event)
{
    m_CurrentApplication->OnJoystickEvent(jid, event);
}

void ApplicationInterface::drop_callback(GLFWwindow* window, int count, const char** paths)
{
    static_cast<ApplicationInterface*>(glfwGetWindowUserPointer(window))->OnFileDrop(window, count, paths);
}
