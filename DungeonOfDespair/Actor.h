#pragma once
#include <boost/uuid/uuid.hpp>
using UUID = boost::uuids::uuid;
#include <string>
#include <vector>
#include "Entity.h"

class Actor : public Entity
{
public:
	Actor(UUID actor_id) : Entity(actor_id, "BaseActor", "BaseActor", "A base Actor", "An inert Base Actor"),currentHP(0),maxHP(0) {};
	Actor(UUID ID, std::string Name, std::string ShortDescription, std::string DetailedDescription,int currenthp, int maxhp) : Entity(ID, "BaseActor", Name, ShortDescription, DetailedDescription),currentHP(currenthp), maxHP(maxhp) {};
	~Actor() {};
private:
	// Base Stats for all Actor subclasses
	int currentHP;
	int maxHP;
	
};

