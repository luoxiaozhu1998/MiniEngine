//
// Created by 71836 on 2022/11/10.
//

#ifndef MINIENGINE_ENGINE_H
#define MINIENGINE_ENGINE_H

#include "string"
#include "Log.h"
#include "memory"

namespace mini {
    class Engine {
    public:
        explicit Engine(const std::string &name = "");

        virtual ~Engine();

        void Run();

        void Close();

        void Initialize();
    private:
    };
}


#endif //MINIENGINE_ENGINE_H
