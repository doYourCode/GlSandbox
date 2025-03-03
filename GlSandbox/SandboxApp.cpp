#include "SandboxApp.h"

#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>

bool SandboxApp::OnInit()
{
    return true;
}

void SandboxApp::OnUpdate(float deltaTime)
{
}

void SandboxApp::OnRender()
{
    UpdateUi();
}

void SandboxApp::OnShutdown()
{
}

bool SandboxApp::InitUi()
{
    // Setup ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();

    // Setup Platform/Renderer bindings
    ImGui_ImplGlfw_InitForOpenGL(this->GetWindow(), true);
    ImGui_ImplOpenGL3_Init("#version 460");

    return true;
}

void SandboxApp::UpdateUi()
{
}
