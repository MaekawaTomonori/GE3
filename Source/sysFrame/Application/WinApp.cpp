#include "WinApp.h"

#include <cassert>
#include <memory>

#include "System/System.h"
#include "System/Window/Window.h"

void WinApp::Initialize(const std::string& title) {
    window_ = std::make_shared<Window>();
    if(!window_->Create(CLIENT_WIDTH, CLIENT_HEIGHT, System::ConvertString(title), L"Window")){
        assert(0 && "Window Creation Failed");
        return;
    }

    /*dxCommon_ = DirectXCommon::Instance();
    if (!dxCommon_->Initialize(window_->GetWindowHandle(), width, height)) {
        assert(0 && "DirectXCommon Creation Failed");
        return;
    }*/
}

[[nodiscard]]
bool WinApp::ProcessMessage() const {
    return window_->ProcessMessage();
}
