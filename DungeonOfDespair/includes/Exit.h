#pragma once
#include <boost/uuid/uuid.hpp>
using UUID = boost::uuids::uuid;
#include <string>
#include <vector>

class Exit
{
public:
private:
	UUID from;
	UUID to;
};