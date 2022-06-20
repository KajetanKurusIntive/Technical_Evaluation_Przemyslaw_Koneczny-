#ifndef GOOSE_H
#define GOOSE_H

#include "Animal.h"

#include <cstdlib>

class Goose : public Animal
{
public:
    Goose(int age = (rand()%11), const std::string& name = "");

    void Speak() const override;
    void ByeAnimal() const override;
};

#endif