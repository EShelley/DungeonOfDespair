// DungeonOfDespair.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "GameController.h"
#include "DungeonGame.h"
#include "GameUI.h"



int main()
{
	GameUI ui = GameUI();
	DungeonGame game = DungeonGame();
	GameController controller = GameController(game,ui);
	
	controller.run();

	return 0;
}
