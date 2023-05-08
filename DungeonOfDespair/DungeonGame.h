#pragma once
/*
	DungeonGame.h
	Description: This will be the Model portion in the MVC patter I plan to follow for this project.

*/
#include <boost/uuid/uuid.hpp>
using UUID = boost::uuids::uuid;
#include "Entity.h"
#include "Room.h"
#include "Actor.h"


class DungeonGame
{
public:
	DungeonGame();
	~DungeonGame();
};

