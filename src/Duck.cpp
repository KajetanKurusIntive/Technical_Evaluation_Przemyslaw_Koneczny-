#include "Duck.h"

#include <iostream>


Duck::Duck(int age, const std::string& name)
: Animal(age, name)
{
    if(name.empty())
    {
        if(age%2)
            m_name = "Earl";
        else
            m_name = "Lady Luck";
    }
}

void Duck::Speak() const
{
    std::cout<<"Quack"<<std::endl;
}

void Duck::ByeAnimal() const
{
    std::cout<<"Bye duck "<< m_name << " age of "<<m_age<<std::endl;
}