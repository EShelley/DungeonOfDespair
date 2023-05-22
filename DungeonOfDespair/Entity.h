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
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <string>
#include <vector>


/**
* 
* @class Entity
* @brief The base Entity class that all game entities derive from
* 
*/
class Entity
{
public:
	Entity()
		: className("Entity"), entityName(""), shortDescription(nullptr), detailedDescription(nullptr) { this->entity_id = boost::uuids::random_generator()(); };
	Entity(std::string classname, std::string name, std::string entityShortDescription, std::string entityDetailedDescription)
		: className(classname), entityName(name), shortDescription(entityShortDescription), detailedDescription(entityDetailedDescription) { this->entity_id = boost::uuids::random_generator()(); };
	Entity(boost::uuids::uuid ent_id, std::string classname, std::string name, std::string entityShortDescription, std::string entityDetailedDescription)
		: entity_id(ent_id),className(classname), entityName(name), shortDescription(entityShortDescription), detailedDescription(entityDetailedDescription) {};
	~Entity();

	boost::uuids::uuid ID() const { return this->entity_id; };

	std::string Name() const { return this->entityName; };
	std::string ClassName() const { return this->className; };
	std::string ShortDescription() const { return this->shortDescription; };
	std::string DetailedDescription() const { return this->detailedDescription; };

	void setName(std::string name) { this->entityName = name; };
	void setClassName(std::string classname) { this->className = classname; };
	void setShortDescription(std::string shortDesc) { this->shortDescription = shortDesc; };
	void setDetailedDescription(std::string detailedDesc) { this->className = detailedDesc; };

	

private:
	boost::uuids::uuid entity_id;
	std::string entityName;
	std::string className;
	std::string shortDescription;
	std::string detailedDescription;
};

