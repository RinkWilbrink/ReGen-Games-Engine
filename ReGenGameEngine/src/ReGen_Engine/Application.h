#pragma once
#include "Core.h"

#include "Window.h"
//#include "ReGenGameEngine/LayerStack.h"
#include "Events/Event.h"
#include "Events/ApplicationEvent.h"

namespace ReGenGames
{
	class REGEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		inline Window& GetWindow() { return *m_Window;  }

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool isRunning = true;
		//LayerStack m_LayerStack;
	private:
		static Application* s_Instance;
	};

	//Needs to bedefinded in a client application code.
	Application* CreateApplication();
}

