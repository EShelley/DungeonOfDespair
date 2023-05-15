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
using UUID = boost::uuids::uuid;
#include <string>
#include <vector>
#include "Entity.h"

/**
 * @brief Base Room class, derives from Entity
*/
class Room : public Entity
{
public:
	Room(UUID room_id) : Entity(room_id, "Room","Room", "An empty room", "This is just an empty room"){};
	Room(UUID room_id, std::string roomname, std::string roomShortDescription, std::string roomDetailedDescription) : Entity(room_id, "Room", roomname, roomShortDescription, roomDetailedDescription) {};
	~Room() {};

	//TODO: Implement Get/Set Exits - How do I want to model this?
private:
};


