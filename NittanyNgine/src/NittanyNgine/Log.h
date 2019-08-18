#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace NittanyNgine {
	class NN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

//Core log macros
#define NN_CORE_ERROR(...) ::NittanyNgine::Log::GetCoreLogger()->error(__VA_ARGS__);
#define NN_CORE_WARN(...)  ::NittanyNgine::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define NN_CORE_INFO(...)  ::NittanyNgine::Log::GetCoreLogger()->info(__VA_ARGS__);
#define NN_CORE_TRACE(...) ::NittanyNgine::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define NN_CORE_FATAL(...) ::NittanyNgine::Log::GetCoreLogger()->fatal(__VA_ARGS__);

//Client log macros
#define NN_ERROR(...) ::NittanyNgine::Log::GetClientLogger()->error(__VA_ARGS__);
#define NN_WARN(...)  ::NittanyNgine::Log::GetClientLogger()->warn(__VA_ARGS__);
#define NN_INFO(...)  ::NittanyNgine::Log::GetClientLogger()->info(__VA_ARGS__);
#define NN_TRACE(...) ::NittanyNgine::Log::GetClientLogger()->trace(__VA_ARGS__);
#define NN_FATAL(...) ::NittanyNgine::Log::GetClientLogger()->fatal(__VA_ARGS__);
