#include "Animal.h"

Animal::Animal(int age, const std::string& name)
: m_age{age}, m_name{name}
{
}

int Animal::getAge() const
{
    return m_age;
}

std::string Animal::getName() const
{
    return m_name;
}

Animal::~Animal() = default;
