#pragma once

#pragma region Start Up Command
#if false	 
#include <iostream>
#include <string.h>
//Execute the Start Up Command(s)
void StartUpCommand(int argc, char** argv)
{
	//std::cout << "Have " << argc << " arguments: \n\n"; //Print the amount of arguments there are give to the program when it starts
	for (int i = 1; i < argc; i++)
	{
		//std::string Arguments = argv[i];
		//Check if the given arguments are working or not
		if (strcmp("arg1", argv[i]) == 0)
		{
			std::cout << "arg1 as start up command" << std::endl;
		}
		else if (strcmp("arg2", argv[i]) == 0)
		{
			std::cout << "arg2 as start up command" << std::endl;
		}
		else if (strcmp("arg3", argv[i]) == 0)
		{
			std::cout << "arg3 as start up command" << std::endl;
		}
		else
		{
			std::cout << "Wrong Arg given! \n" << std::endl;
		}
		//std::cout << i << std::endl; //Display the number the for loop is at now.
	}
}
#else
//Execute the Start Up Commands! (function is empty, Set PreProcessor statement to true)
void StartUpCommand(int argc, char** argv) { }
#endif
#pragma endregion

#ifdef RG_PLATFORM_WINDOWS

extern ReGenGames::Application* ReGenGames::CreateApplication();

int main(int argc, char** argv)
{
	ReGenGames::Log::Init(); CORE_INFO("Log Initialization completed!");
	auto app = ReGenGames::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif		//RG_PLATFORM_WINDOWS