#pragma once
/*
	Class: GameController 
	Description: This will be the Control portion in the MVC patter I plan to follow for this project.

*/
#include "DungeonGame.h"
#include "GameUI.h"

class GameController
{
public:
	GameController(DungeonGame& game, GameUI& ui);
	~GameController();
	
	void run();

private:
	DungeonGame& m_game;
	GameUI& m_ui;
};

