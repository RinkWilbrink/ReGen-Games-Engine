#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace ReGenGames
{
	class REGEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Needs to bedefinded in a client application code.
	Application* CreateApplication();
}

