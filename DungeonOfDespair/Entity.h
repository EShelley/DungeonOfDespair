#pragma once
#include <boost/uuid/uuid.hpp>
class Entity
{
public:
	Entity(boost::uuids::uuid ent_id);
	~Entity();

	const boost::uuids::uuid getEntityID();

private:
	boost::uuids::uuid entity_id;
};

