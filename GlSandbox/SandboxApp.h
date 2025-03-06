#pragma once

#include "Sandbox/Engine/ApplicationInterface.h"
#include "Log/Terminal.h"
#include <chaiscript/chaiscript.hpp>

class SandboxApp : public ApplicationInterface
{
public:
    SandboxApp() : ApplicationInterface() {}

private:

    bool OnInit() final;

    void OnUpdate(float deltaTime) final;

    void OnRender() final;

    void OnShutdown() final;

    bool InitUi();

    void UpdateUi();

    const Terminal& GetTerminal() const { return m_Terminal; }

    Terminal m_Terminal = Terminal(this);

    static chaiscript::ChaiScript chaiscript;

    static void CommandCallbackImpl(const std::string&);
};