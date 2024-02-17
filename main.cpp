#include <iostream>

#include "Game.h"

using namespace std;

void PrintWarrior(IWarrior* warrior);
void PrintMagician(IMagician* magician);
void PrintHero(Hero *hero);

int main() {
    Hero *hero = nullptr;
    Hero *enemy = nullptr;

    Game game;

    HeroType heroType;
    HeroSpecialization heroSpecialization;

    cout << "Heroes:" << endl;
    cout << "1. Elf" << endl;
    cout << "2. Dwarf" << endl;
    char inputHero;
    cin >> inputHero;

    cout << "Specialization:" << endl;
    cout << "1. Magician" << endl;
    cout << "2. Warrior" << endl;
    char inputSpecialization;
    cin >> inputSpecialization;

    cout << "Enter hero name: ";
    string heroName;
    cin >> heroName;

    switch (inputSpecialization) {
        case '1':
            heroSpecialization = HeroSpecialization::Magician;
            break;
        case '2':
            heroSpecialization = HeroSpecialization::Warrior;
            break;
    }

    switch (inputHero) {
        case '1':
            heroType = HeroType::Elf;
            break;
        case '2':
            heroType = HeroType::Dwarf;
            break;
    }

    hero = Game::createHero(heroName, heroType, heroSpecialization);
    enemy = Game::createHero("Enemy", HeroType::Elf, HeroSpecialization::Warrior);

    PrintHero(hero);
    PrintHero(enemy);

    hero->Attack(enemy);
    enemy->Attack(hero);

    PrintHero(hero);
    PrintHero(enemy);

    return 0;
}



void PrintHero(Hero *hero) {
    cout << "Name: " << hero->getName() << endl;
    cout << "Health: " << hero->getHealth() << endl;
    cout << "Damage: " << hero->getDamage() << endl;

    if (hero->getSpecialization() == HeroSpecialization::Magician) {
        PrintMagician(dynamic_cast<IMagician*>(hero));
    } else if (hero->getSpecialization() == HeroSpecialization::Warrior) {
        PrintWarrior(dynamic_cast<IWarrior*>(hero));
    }
}

void PrintWarrior(IWarrior* warrior) {
    cout << "Power: " << warrior->getPower() << endl;
}

void PrintMagician(IMagician* magician) {
    cout << "Mana: " << magician->getMana() << endl;
}