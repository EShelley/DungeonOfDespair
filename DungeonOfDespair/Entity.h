#pragma once
/**
* 
* @file Entity.h
* @brief Base Entity class Definition
* @author Eric Shelley
* @date 08May2023
* 
*/
#include <boost/uuid/uuid.hpp>
using UUID = boost::uuids::uuid;
#include <string>


/**
* 
* @class Entity
* @brief The base Entity class that all game entities derive from
* 
*/
class Entity
{
public:
	Entity(UUID ent_id)
		: entity_id(ent_id), className("Entity"), entityName(""), shortDescription(nullptr), detailedDescription(nullptr) {};
	Entity(UUID ent_id, std::string classname, std::string name, std::string entityShortDescription, std::string entityDetailedDescription) 
		: entity_id(ent_id),className(classname), entityName(name), shortDescription(std::move(entityShortDescription)), detailedDescription(std::move(entityDetailedDescription)) {};
	~Entity();

	UUID ID() const { return this->entity_id; };

	std::string Name() const { return this->entityName; };
	std::string ClassName() const { return this->className; };
	std::string ShortDescription() const { return this->shortDescription; };
	std::string DetailedDescription() const { return this->detailedDescription; };

	void setName(std::string name) { this->entityName = std::move(name); };
	void setClassName(std::string classname) { this->className = std::move(classname); };
	void setShortDescription(std::string shortDesc) { this->shortDescription = std::move(shortDesc); };
	void setDetailedDescription(std::string detailedDesc) { this->className = std::move(detailedDesc); };

	

private:
	UUID entity_id;
	std::string entityName;
	std::string className;
	std::string shortDescription;
	std::string detailedDescription;
};

