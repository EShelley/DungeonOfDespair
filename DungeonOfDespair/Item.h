#pragma once
#include "Entity.h"
class Item : public Entity
{
public:
	Item(UUID entityID) : Entity(entityID, "BaseItem", "BaseItem", "A basic Item", "An inert Base Item"),itemValue(0) {};

	int Value() const { return this->itemValue; };
	void setValue(int value) { this->itemValue = value; };

	virtual void Use(Entity *ent)=0;

private:
	int itemValue;
};