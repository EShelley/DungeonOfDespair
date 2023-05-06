#include "Entity.h"

Entity::Entity(boost::uuids::uuid ent_id) {
	this->entity_id = ent_id;
};
Entity::~Entity() {

};

const boost::uuids::uuid Entity::getEntityID() {
	return this->entity_id;
}