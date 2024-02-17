#ifndef HEROES_IWARRIOR_H
#define HEROES_IWARRIOR_H


class IWarrior {
protected:
    int power;
    static HeroSpecialization SPECIALIZATION;

    IWarrior() {}

public:
    int getPower() const {
        return power;
    }
};

HeroSpecialization IWarrior::SPECIALIZATION = HeroSpecialization::Warrior;

#endif //HEROES_IWARRIOR_H
