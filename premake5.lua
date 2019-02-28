workspace "ReGenGameEngine"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	-- Include directories relative to root folder
	IncludeDir = {}
	IncludeDir["GLFW"] = "ReGenGameEngine/vendor/GLFW/inlcude"

	include "ReGenGameEngine/vendor/GLFW"
	
	project "ReGenGameEngine"
		location "ReGenGameEngine"
		kind "SharedLib"
		language "C++"
		
		targetdir ("bin/" .. outputdir .. "/%{prj.name}")
		objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

		pchheader "rgpch.h"
		pchsource "ReGenGameEngine/src/rgpch.cpp"

		files
		{
			"%{prj.name}/src/**.h",
			"%{prj.name}/src/**.cpp"
		}
		
		includedirs
		{
			"%{prj.name}/vendor/spdlog/include",
			"%{prj.name}/src"
		}

		filter "system:windows"
			cppdialect "C++17"
			staticruntime "On"
			systemversion "latest"
			
			defines
			{
				"RG_PLATFORM_WINDOWS",
				"RG_BUILD_DLL"
			}
			
			postbuildcommands
			{
				("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Game")
			}
		
		filter "configurations:Debug"
			defines "RG_DEBUG"
			symbols "On"
		
		filter "configurations:Release"
			defines "RG_RELEASE"
			optimize "On"
		
		filter "configurations:Dist"
			defines "RG_DIST"
			optimize "On"
		
	project "Game"
		kind "ConsoleApp"
		language "C++"
		location "Game"
		targetdir ("bin/" .. outputdir .. "/%{prj.name}")
		objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

		files
		{
		    "%{prj.name}/src/**.h",
		    "%{prj.name}/src/**.cpp"
		}
		
		includedirs
		{
			"ReGenGameEngine/vendor/spdlog/include",
			"ReGenGameEngine/src"
		}
		
		links
		{
			"ReGenGameEngine"
		}
		
		filter "system:windows"
			cppdialect "C++17"
			staticruntime "On"
			systemversion "latest"
			defines
			{
				"RG_PLATFORM_WINDOWS"
			}
			
		filter "configurations:Debug"
			defines "RG_DEBUG"
			symbols "On"
		filter "configurations:Release"
			defines "RG_RELEASE"
			optimize "On"
		filter "configurations:Dist"
			defines "RG_DIST"
			optimize "On"