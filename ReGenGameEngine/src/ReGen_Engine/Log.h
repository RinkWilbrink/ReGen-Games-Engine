#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace ReGenGames
{
	class REGEN_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

///<summary>TRACE for in Engine debugging</summary>
#define CORE_TRACE(...)::ReGenGames::Log::getCoreLogger()->trace(__VA_ARGS__)
///<summary>INFO for in Engine debugging</summary>
#define CORE_INFO(...)::ReGenGames::Log::getCoreLogger()->info(__VA_ARGS__)
///<summary>WARNING for in Engine debugging</summary>
#define CORE_WARN(...)::ReGenGames::Log::getCoreLogger()->warn(__VA_ARGS__)
///<summary>ERROR for in Engine debugging</summary>
#define CORE_ERROR(...)::ReGenGames::Log::getCoreLogger()->error(__VA_ARGS__)
///<summary>FATAL for in Engine debugging</summary>
#define CORE_FATAL(...)::ReGenGames::Log::getCoreLogger()->fatal(__VA_ARGS__)

///<summary>TRACE for client program debugging</summary>
#define DEBUG_TRACE(...)::ReGenGames::Log::getClientLogger()->trace(__VA_ARGS__)
///<summary>INFO for client program debugging</summary>
#define DEBUG_INFO(...)::ReGenGames::Log::getClientLogger()->info(__VA_ARGS__)
///<summary>WARNING for client program debugging</summary>
#define DEBUG_WARN(...)::ReGenGames::Log::getClientLogger()->warn(__VA_ARGS__)
///<summary>ERROR for client program debugging</summary>
#define DEBUG_ERROR(...)::ReGenGames::Log::getClientLogger()->error(__VA_ARGS__)
///<summary>FATAL for client program debugging</summary>
#define DEBUG_FATAL(...)::ReGenGames::Log::getClientLogger()->fatal(__VA_ARGS__)