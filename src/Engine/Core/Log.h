//
// Created by 71836 on 2022/11/10.
//

#ifndef MINIENGINE_LOG_H
#define MINIENGINE_LOG_H

#include "spdlog/spdlog.h"

namespace mini {
    class Log {
    public:
        static void Init();

        static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_core_logger_; }

        static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_client_logger_; }

    private:
        static std::shared_ptr<spdlog::logger> s_core_logger_;
        static std::shared_ptr<spdlog::logger> s_client_logger_;
    };
}

#define MINI_CORE_TRACE(...)     ::mini::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MINI_CORE_INFO(...)      ::mini::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MINI_CORE_WARN(...)      ::mini::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MINI_CORE_ERROR(...)     ::mini::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MINI_CORE_CRITICAL(...)  ::mini::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define MINI_CORE_ASSERT(x, ...) { if(!(x)) { MINI_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define MINI_TRACE(...)       ::mini::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MINI_INFO(...)     ::mini::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MINI_WARN(...)     ::mini::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MINI_ERROR(...)    ::mini::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MINI_CRITICAL(...) ::mini::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define MINI_ASSERT(x, ...) { if(!(x)) { MINI_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }


#endif //MINIENGINE_LOG_H
