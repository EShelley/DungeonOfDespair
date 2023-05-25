#pragma once
/**
*
* @file Room.h
* @brief Base Room class, derives from Entity
* @author Eric Shelley
* @date 08May2023
*
*/

#include "Entity.h"

/**
 * @brief Base Room class, derives from Entity
*/
class Room : public Entity
{
public:
	Room() : Entity("Room","Room", "An empty room", "This is just an empty room"){};
	Room(std::string roomname, std::string roomShortDescription, std::string roomDetailedDescription) : Entity("Room", roomname, roomShortDescription, roomDetailedDescription) {};
	Room(boost::uuids::uuid room_id, std::string roomname, std::string roomShortDescription, std::string roomDetailedDescription) : Entity(room_id, "Room", roomname, roomShortDescription, roomDetailedDescription) {};
	~Room() {};

	//TODO: Implement Get/Set Exits - How do I want to model this?
private:
};


