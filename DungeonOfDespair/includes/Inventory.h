#pragma once
#include"Item.h"

class Inventory
{
public:
	Inventory() :maxCapacity(0) {};
	Inventory(int capacity) :maxCapacity(capacity) {};
	Inventory(int capacity, std::vector<std::unique_ptr<Item>> inventory) :maxCapacity(capacity),storage(std::move(inventory)) {};
	
	bool AddItem(std::unique_ptr<Item> item) {};

	const int MaxCapacity() { return this->maxCapacity; };
	const int CurrentEmptyCapacity() { return (this->maxCapacity - this->storage.size()); };
	const int CurrentUsedCapacity() { return this->storage.size(); };
	std::unique_ptr<Item> RemoveItem(boost::uuids::uuid itemID);
	std::unique_ptr<Item> RemoveItem(std::string itemName);
	std::vector<std::unique_ptr<Item>> RemoveAllItems() { return std::move(this->storage); };
	
	const std::vector<std::unique_ptr<Item>>& ListAllItems(const std::type_info& itemType);

private:
	int maxCapacity;
	std::vector<std::unique_ptr<Item>> storage;
};

