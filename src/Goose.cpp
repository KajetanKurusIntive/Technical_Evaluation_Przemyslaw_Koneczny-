#include "Goose.h"

#include <iostream>


Goose::Goose(int age, const std::string& name)
: Animal(age, name)
{
    if(name.empty())
    {
        if(age%2)
            m_name = "Bertram";
        else
            m_name = "Mother Goose";
    }
}

void Goose::Speak() const
{
    std::string honk;
    honk.append("HO");
    honk.append(std::string(m_age, 'O'));
    honk.append("NK");
    std::cout<<honk<<std::endl;
}

void Goose::ByeAnimal() const
{
    std::cout<<"Bye goose "<< m_name << " age of "<<m_age<<std::endl;
}