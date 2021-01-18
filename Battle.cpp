#include "Battle.hpp"
#include <iostream>

void printStatus(const Warrior& warrior1, const Warrior& warrior2) {
    std::cout<<warrior1.toString()<<" --- "<<warrior2.toString()<<std::endl;
}

void printEndOfFight(const Warrior& warrior) {
    std::cout<<warrior.toString();
}

void fighting(Warrior& warrior1, Warrior& warrior2) {
    printStatus(warrior1, warrior2);
    while (warrior1.isAlive() && warrior2.isAlive()) {
        warrior1.attack(warrior2);
        if (warrior2.isAlive()) {
            warrior2.attack(warrior1);
        }
    }
    std::cout<<"The winner is: ";
    if (warrior1.isAlive()) {
        printEndOfFight(warrior1);
        std::cout<<" --- "<<warrior2.getName();
    }
    else {
        printEndOfFight(warrior2);
        std::cout<<" --- "<<warrior1.getName();

    }
}