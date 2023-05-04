/*
	GameController.cpp
	Description: This will be the Control portion in the MVC patter I plan to follow for this project.

*/

#include "GameController.h"
#include "GameUI.h"
#include "DungeonGame.h"


GameController::GameController(DungeonGame& game, GameUI& ui) :m_game(game), m_ui(ui)
{
}

GameController::~GameController() {
}

void GameController::run() {

	
	std::string input;

	m_ui.displayLine("Hello World!");

	while (input != "quit") {
		m_ui.display("Please Enter a command: ");
		input = m_ui.getInput();

		if (!input.empty())
			m_ui.display("Command entered: " + input);
		else
			m_ui.display("NEED INPUT!");


	}
	
}
