#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
protected:
    int m_age;
    std::string m_name;

public:
    Animal(int age, const std::string& name);
    
    virtual void Speak() const = 0;
    int getAge() const;
    std::string getName() const;
    virtual void ByeAnimal() const = 0;
    virtual ~Animal();
};

#endif