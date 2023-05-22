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

	void NewGame();
	bool LoadGame(std::string gameName);
	bool SaveGame(std::string gameName);

	void Run();

private:
	bool gameLoaded = false;

};

