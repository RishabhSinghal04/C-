#include <string>
#include "person.h"

/* __Constructors__ */
Person::Person()
{
	name = "";
	age = 0;
	// weight = new uint16_t;
	// *weight = 0;
}

Person::Person(std::string_view name, uint16_t age)
	: name(name), age{age}
{
	// this->name = name;
	// this->age = age;
	// weight = new uint16_t;
	// *weight = _weight;
}

/* __Destructor__ */
/* Person::~Person()
{
	delete weight;
} */

/* __Getters__ */
void Person::setName(std::string_view name)
{
	this->name = name;
}

void Person::setAge(uint16_t age)
{
	this->age = age;
}

/* void Person::setWeight(uint16_t _weight)
{
	weight = new uint16_t;
	*weight = _weight;
} */

/* __Setters__ */
std::string Person::getName() const
{
	return name;
}

uint16_t Person::getAge() const
{
	// age++;
	return age;
}

/* uint16_t Person::getWeight()
{
	return *weight;
} */