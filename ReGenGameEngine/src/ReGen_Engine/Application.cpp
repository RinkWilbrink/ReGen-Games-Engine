#include "rgpch.h"
#include "Application.h"
#include "ReGen_Engine/Log.h"
//#include "Input.h"

#include <glad/glad.h>

namespace ReGenGames
{
#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

	Application* Application::s_Instance = nullptr;

	Application::Application()
	{
		RG_CORE_ASSERT(!s_Instance, "Application already exists!");
		s_Instance = this;

		m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
	}

	Application::~Application()
	{
	}

	void Application::OnEvent(Event& e)
	{
		EventDispatcher dispatcher(e);
		dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));

		/* Layer stacking
		for (auto it = m_LayerStack.end(); it < m_LayerStack.begin();)
		{
			(*--it)->OnEvent(e);
			if(e.Handled)
				break;
		}
		*/
	}

	void Application::Run()
	{
		//While loop to keep the program running
		while (isRunning)
		{
			glClearColor(0, 0, 0, 1); // Background Colour
			glClear(GL_COLOR_BUFFER_BIT);

			/*
			for(Layer* layer : m_LayerStack)
				layer->OnUpdate();
			*/

			m_Window->OnUpdate();
		}
	}

	bool Application::OnWindowClose(WindowCloseEvent& e)
	{
		isRunning = false;
		return true;
	}
}