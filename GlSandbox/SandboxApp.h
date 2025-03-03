#pragma once

#include "Sandbox/Engine/ApplicationInterface.h"

class SandboxApp : public ApplicationInterface
{
    bool OnInit() final;

    void OnUpdate(float deltaTime) final;

    void OnRender() final;

    void OnShutdown() final;

    bool InitUi();

    void UpdateUi();
};

