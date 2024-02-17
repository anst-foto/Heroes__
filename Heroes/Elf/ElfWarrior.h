#ifndef HEROES_ELFWARRIOR_H
#define HEROES_ELFWARRIOR_H

#include "Elf.h"
#include "../IWarrior.h"

class ElfWarrior : public Elf, public IWarrior {
private:
    const int POWER = 30;

public:
    explicit ElfWarrior(const string &name) : Elf(name, SPECIALIZATION) {
        power = POWER;
    }

    void Attack(Hero *enemy) override {
        auto totalDamage = damage + power;
        auto newHealth = enemy->getHealth() - totalDamage;
        enemy->setHealth(newHealth);
    }
};

#endif //HEROES_ELFWARRIOR_H
