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
	Entity(boost::uuids::uuid ent_id)
		: entity_id(ent_id), className("Entity"), entityName(""), shortDescription(nullptr), detailedDescription(nullptr) {};
	Entity(boost::uuids::uuid ent_id, std::string classname, std::string name, std::string entityShortDescription, std::string entityDetailedDescription) 
		: entity_id(ent_id),className(classname), entityName(name), shortDescription(std::move(entityShortDescription)), detailedDescription(std::move(entityDetailedDescription)) {};
	~Entity();

	const boost::uuids::uuid ID() { return this->entity_id; };

	const std::string Name() { return this->entityName; };
	const std::string ClassName() { return this->className; };
	const std::string ShortDescription() { return this->shortDescription; };
	const std::string DetailedDescription() { return this->detailedDescription; };

	void setName(std::string name) { this->entityName = std::move(name); };
	void setClassName(std::string classname) { this->className = std::move(classname); };
	void setShortDescription(std::string shortDesc) { this->shortDescription = std::move(shortDesc); };
	void setDetailedDescription(std::string detailedDesc) { this->className = std::move(detailedDesc); };

	

private:
	boost::uuids::uuid entity_id;
	std::string entityName;
	std::string className;
	std::string shortDescription;
	std::string detailedDescription;
};

