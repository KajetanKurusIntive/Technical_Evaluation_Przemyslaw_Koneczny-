#ifndef DUCK_H
#define DUCK_H

#include "Animal.h"

#include <cstdlib>

class Duck : public Animal
{
public:
    Duck(int age = (rand()%11), const std::string& name = "");

    void Speak() const override;
    void ByeAnimal() const override;
};

#endif