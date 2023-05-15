#pragma once
#include <boost/uuid/uuid.hpp>
using UUID = boost::uuids::uuid;
#include <string>
#include <vector>
#include "Entity.h"

class Actor : public Entity
{
public:
	Actor() : Entity("BaseActor", "BaseActor", "A base Actor", "An inert Base Actor"),currentHP(0),maxHP(0),alive(true) {};
	Actor(std::string Name, std::string ShortDescription, std::string DetailedDescription, int currenthp, int maxhp, bool isLive) : Entity("BaseActor", Name, ShortDescription, DetailedDescription), currentHP(currenthp), maxHP(maxhp), alive(isLive) {};
	Actor(UUID ID, std::string Name, std::string ShortDescription, std::string DetailedDescription,int currenthp, int maxhp, bool isLive) : Entity(ID, "BaseActor", Name, ShortDescription, DetailedDescription),currentHP(currenthp), maxHP(maxhp),alive(isLive) {};
	~Actor() {};

	int CurrentHP() const { return this->currentHP; };
	int MaxHP() const { return this->maxHP; };

	void modifyMaxHP(int amount);
	void modifyCurrentHP(int amount);

	bool isAlive() const { return this->alive; };
	void setAlive(bool isLive) { this->alive = isLive; };

private:
	// Base Stats for all Actor subclasses
	int currentHP;
	int maxHP;
	
	bool alive;

	// Stats?
};

