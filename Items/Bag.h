#ifndef HEROES_BAG_H
#define HEROES_BAG_H

#include <vector>

#include "AbstractItem.h"

using namespace std;

class Bag {
public:
    vector<AbstractItem*>* items;//TODO скрыть переменную, сделать методы для добавления, удаления элементов
    vector<Bag*>* bags;//BUG
};


#endif //HEROES_BAG_H
