#include <iostream>
#include <string>
using namespace std;

#include "Warrior.hpp"
#include "Battle.hpp"


int main(int argc, char** argv) {
    Warrior warrior1 = Warrior::parseFromText(argv[1]);
    Warrior warrior2 = Warrior::parseFromText(argv[2]);

    fighting(warrior1, warrior2);

return 0;
}