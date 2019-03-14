#include "rgpch.h"
#include "Application.h"
#include "ReGen_Engine/Log.h"
#include "Events/ApplicationEvent.h"

namespace ReGenGames
{
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CORE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CORE_INFO(e);
		}

		//While loop to keep the program running
		while (true);
	}
}