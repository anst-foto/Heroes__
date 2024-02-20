#ifndef HEROES_HERO_H
#define HEROES_HERO_H

#include <string>

#include "HeroTypes.h"
#include "../Items/Bag.h"

using namespace std;

class Hero {
protected:
    string name;

    int health;
    int damage;

    HeroType type;
    HeroSpecialization specialization;

    Bag* bag;

public:
    Hero(const string &name, int health, int damage, HeroType type, HeroSpecialization specialization) : name(name),
                                                                                                         health(health),
                                                                                                         damage(damage),
                                                                                                         type(type),
                                                                                                         specialization(
                                                                                                                 specialization) {
        bag = new Bag();
    }

public:
    const string &getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    void setHealth(int health) {
        if (health < 0) {
            this->health = 0;
        } else {
            this->health = health;
        }
    }

    int getDamage() const {
        return damage;
    }

    HeroType getType() const {
        return type;
    }

    HeroSpecialization getSpecialization() const {
        return specialization;
    }

    virtual void Attack(Hero* enemy) = 0;
};

#endif //HEROES_HERO_H
