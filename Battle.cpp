#include "Battle.hpp"
#include <iostream>

void printStatus(const Warrior& warrior1, const Warrior& warrior2) {
    std::cout<<warrior1.toString()<<" --- "<<warrior2.toString()<<std::endl;
}

void fighting(Warrior& warrior1, Warrior& warrior2) {
    while (warrior1.isAlive() && warrior2.isAlive()) {
        warrior1.attack(warrior2);
        if (warrior2.isAlive()) {
            warrior2.attack(warrior1);
        }
    }
    std::cout<<"The winner is: ";
    if (warrior1.isAlive()) {
        printStatus(warrior1, warrior2);
    }
    if (warrior2.isAlive()) {
        printStatus(warrior2, warrior1);
    }
}