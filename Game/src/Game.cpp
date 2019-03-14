#include <ReGenGames.h>
//#include "../src/custom Library's/Functions.h"

//Main class for the game the user is making.
class Game : public ReGenGames::Application
{
public:
	Game() 
	{
		DEBUG_INFO("test game;");
	}
	~Game() 
	{
		DEBUG_INFO("end game");
	}
};

//function that returns the game instance so the engine can use it and Run the users code.
ReGenGames::Application* ReGenGames::CreateApplication()
{
	return new Game();
}