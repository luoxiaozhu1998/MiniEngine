//
// Created by 71836 on 2022/11/10.
//

#include "Engine.h"
namespace mini{
    Engine::Engine(const std::string &name) {
        Log::Init();
    }

    Engine::~Engine() = default;

    void Engine::Close() {

    }

    void Engine::Run() {
        MINI_CORE_INFO("Engine Start!");
        while  (true){
            
        }
    }

    void Engine::Initialize() {

    }

}

