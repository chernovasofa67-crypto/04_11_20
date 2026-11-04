//
// Created by Евгения on 04.11.2026.
//

#include "BoardGame.h"
#include "BoardGame.h"

Products::Fun::BoardGame::BoardGame()
{
    quantity = 0;
}

Products::Fun::BoardGame::BoardGame(std::string name, std::string producer, float price, int age, int quantity):
    Product(name,producer,price,age)
{
    this->quantity = quantity;
}

void Products::Fun::BoardGame::setQuantity(int quantity)
{
    this->quantity = quantity;
}

int Products::Fun::BoardGame::getQuantity() const
{
    return quantity;
}

void Products::Fun::BoardGame::show() const
{
    std::cout << "\t Board game \n"
        << "Name: " << std::endl
        << "Producer: " << std::endl
        << "Price: " << std::endl
        << "Age: " << std::endl
        << "Quantity: " << std::endl;
}

float Products::Fun::BoardGame::calcPrice() const
{
    float total = price;


    if (quantity > 2) {
        total += (quantity - 2) * 0.05f * price;
    }

    return total;
}

void Products::Fun::BoardGame::saveToFile(std::ofstream& file) const
{
    file << "BoardGame\n";
    file << name << "\n";
    file << producer << "\n";
    file << price << "\n";
    file << age << "\n";
    file << quantity << "\n";
}

void Products::Fun::BoardGame::loadFromFile(std::ifstream& file)
{
    std::getline(file, name);
    std::getline(file, producer);
    file >> price;
    file >> age;
    file >> quantity;
    file.ignore();
}

