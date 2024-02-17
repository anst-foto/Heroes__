#ifndef HEROES_IMAGICIAN_H
#define HEROES_IMAGICIAN_H


class IMagician {
protected:
    int mana;
    static HeroSpecialization SPECIALIZATION;

    IMagician() {}

public:
    int getMana() const {
        return mana;
    }
};

HeroSpecialization IMagician::SPECIALIZATION = HeroSpecialization::Magician;

#endif //HEROES_IMAGICIAN_H
