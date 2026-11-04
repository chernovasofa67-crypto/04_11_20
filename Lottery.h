//
// Created by Евгения on 04.11.2026.
//

#ifndef INC_04_11_20_LOTTERY_H
#define INC_04_11_20_LOTTERY_H
#pragma once
#include <vector>
#include "Toy.h"
#include "Book.h"
#include "Clothing.h"
#include "BoardGame.h"

class Lottery
{
    std::vector<Products::Product*>items;
public:
    Lottery();
    ~Lottery();
    void show()const;
    void save()const;
    void load();
};


#endif //INC_04_11_20_LOTTERY_H
