#include "Animal.h"
#include "Duck.h"
#include "Goose.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <set>
#include <array>
#include <algorithm>
#include <memory>
#include <fstream>


struct AnimalComp
{
    bool operator() (const std::shared_ptr<Animal>& lhs, const std::shared_ptr<Animal>& rhs) const
    {
        return lhs->getAge() > rhs->getAge();
    }
};

void removeTheOldestAnimal(std::multiset<std::shared_ptr<Animal>, AnimalComp>& collection)
{
    auto it = collection.begin();
    if(it!=collection.end())
    {
        (*it)->ByeAnimal();
        collection.erase(it);
    }
}


int main()
{
    srand(time(0));
    std::cout<<"Evaluation Koneczny\n"<<std::endl;
    std::array<std::shared_ptr<Duck>, 13> myDucks;
    for(int i =0; i < 13; ++i)
    {
        myDucks[i] = std::make_shared<Duck>();
    }

    std::multiset<std::shared_ptr<Animal>, AnimalComp> ducksContainer(myDucks.cbegin(), myDucks.cend());
    std::cout<<"Initial container size: "<<ducksContainer.size() <<std::endl;
    for(int i = 0; i < 21; ++i)
    {
        removeTheOldestAnimal(ducksContainer);
        std::cout<<"Iteration "<<i+1<<": container size: " <<ducksContainer.size() <<std::endl;
    }

    std::array<std::shared_ptr<Animal>, 20> myAnimals;
    for(int i =0; i < 10; ++i)
    {
        myAnimals[i] = std::make_shared<Duck>();
        myAnimals[i+10] = std::make_shared<Goose>();
    }
    
    std::cout<<"\n===Unsorted animals collection Speak()==="<<std::endl;
    for(const auto& elem: myAnimals)
    {
        (*elem).Speak();
    }
    
    std::sort(myAnimals.begin(), myAnimals.end(), AnimalComp());
    if(std::is_sorted(myAnimals.cbegin(), myAnimals.cend(), AnimalComp()))
    {
        std::cout<<"\n===Sorted animals collection Speak()==="<<std::endl;
        for(const auto& elem: myAnimals)
        {
            (*elem).Speak();
        }
    }
    
    int ageSum{0};
    std::string allNames;
    for(const auto& elem: myAnimals)
    {
        ageSum += (*elem).getAge();
        allNames += (*elem).getName() + '\n';
    }
    std::cout<<"\nTotal age of all animals: "<<ageSum<<std::endl;

    std::ofstream outf{"names.txt"};
    if(!outf)
    {
        std::cerr << "names.txt could not be opened for writting!\n";
        return 1;
    }
    allNames.pop_back();
    outf << allNames;
    outf.close();

	return 0;
}
