#pragma once
/**
*
* @file Room.h
* @brief Base Room class, derives from Entity
* @author Eric Shelley
* @date 08May2023
*
*/
#include <boost/uuid/uuid.hpp>
#include <string>
#include <vector>
#include "Entity.h"

/**
 * @brief Base Room class, derives from Entity
*/
class Room : Entity
{
public:
	Room(boost::uuids::uuid room_id) : Entity(room_id, "Room","Room", "An empty room", "This is just an empty room"){};
	Room(boost::uuids::uuid room_id, std::string roomname, std::string roomShortDescription, std::string roomDetailedDescription) : Entity(room_id, "Room", roomname, roomShortDescription, roomDetailedDescription) {};
	~Room() {};

	//TODO: Implement Get/Set Exits - How do I want to model this?
private:
};

