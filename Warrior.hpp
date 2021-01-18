#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <string>

class Warrior {
    public:
        Warrior(const std::string& name, int health_points, int damage=0, int defense=0);
        std::string toString() const;
        void attack(Warrior& defender) const;
        bool isAlive() const;
        static Warrior parseFromText(const std::string& filename);
        std::string getName() const;
    private:
        std::string name;
        int health_points;
        int damage;
        int defense;
        void die();
};

#endif
