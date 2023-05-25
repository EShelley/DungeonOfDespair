#pragma once
/*
	DungeonGame.h
	Description: This will be the Model portion in the MVC patter I plan to follow for this project.

*/
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "Entity.h"
#include "Room.h"
#include "Actor.h"


class DungeonGame
{
public:
	DungeonGame();
	~DungeonGame();

	void Display();  // Prints out the current game view? - But if just using std::cout - this could be don

	std::vector<std::string> const TokenizeInput(std::string input);
	void ProcessInput(std::vector<std::string>& tokens); //??

	void NewGame();
	bool LoadGame(std::string gameName);
	bool SaveGame(std::string gameName);

	void Run();  // Main Game Loop

private:
	bool gameLoaded = false;

};

