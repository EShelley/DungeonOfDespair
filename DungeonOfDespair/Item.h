#pragma once
#include "Entity.h"
class Item : public Entity
{
public:
	Item() : Entity("BaseItem", "BaseItem", "A basic Item", "An inert Base Item"),itemValue(0) {};
	Item(std::string Name, std::string ShortDescription, std::string DetailedDescription, int value) : Entity("BaseItem", Name, ShortDescription, DetailedDescription), itemValue(value) {};
	Item(boost::uuids::uuid ID, std::string Name, std::string ShortDescription, std::string DetailedDescription, int value) : Entity(ID, "BaseItem", Name, ShortDescription, DetailedDescription), itemValue(value) {};

	int Value() const { return this->itemValue; };
	void setValue(int value) { this->itemValue = value; };

	virtual void Use(Entity &target)=0;

private:
	int itemValue;
}; 