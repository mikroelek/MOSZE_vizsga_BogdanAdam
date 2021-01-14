#include "Warrior.hpp"

void Warrior::initialize(const std::string& name, int health_points, int damage, int defense) {
    this->name=name;
    this->health_points=health_points;
    this->damage=damage;
    this->defense=defense;
}

std::string Warrior::toString() const {
    return 
    name 
    +" ("
    +"HP: "+std::to_string(health_points)
    +" DMG: "+std::to_string(damage)
    +" DEF: "+std::to_string(defense)
    +")";
}

void Warrior::die() {
    health_points=0;
    damage=0;
    defense=0;
    name += " DEAD ";
}

void Warrior::attack(Warrior& defender) const {
    int curr_damage=damage-defender.defense;
    if (curr_damage>0) {
        defender.health_points-=curr_damage;
        if (!defender.isAlive()) defender.die();
    }
}

bool Warrior::isAlive() const {
    return health_points >0;
}