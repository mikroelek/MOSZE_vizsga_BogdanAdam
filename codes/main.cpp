#include <iostream>
#include <string>
using namespace std;

#include "Warrior.hpp"
#include "Battle.hpp"

void readDataFromInput(Warrior& warrior){
    std::string name;
    int hp, dmg, def;
    cin >> name >> hp >> dmg >> def;
    warrior.initialize(name, hp, dmg, def);
}

int main() {
    Warrior warrior1, warrior2;
    readDataFromInput(warrior1);
    readDataFromInput(warrior2);
    fighting(warrior1, warrior2);

return 0;
}