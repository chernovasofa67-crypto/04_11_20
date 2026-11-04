//
// Created by Евгения on 04.11.2026.
//
#include "Lottery.h"

Lottery::Lottery()
{
    /*items.push_back(new Products::Fun::Toy("Bear","Ukraine",2000,2,"wood"));*/
    /*items.push_back(new Products::Fun::Book("C++","Ranok",5000,12,"Straustrup","Since",1000));*/
    //items.push_back(new Sport::Clothing("T-shirt","China",500,10,"cotton","M",10));
}

Lottery::~Lottery()
{
    for (int i = 0;i < items.size(); i++) {
        delete items[i];
    }
}

void Lottery::show() const
{
    for (int i = 0;i < items.size(); i++) {
        items[i]->show();
    }
}

void Lottery::save() const
{
    std::ofstream file("lottery.txt");
    if (file.is_open()) {
        for (int i = 0;i < items.size(); i++) {
            items[i]->saveToFile(file);
        }
        file.close();
    }
}

void Lottery::load()
{
    std::ifstream file("lottery.txt");
    if (file.is_open()) {
        while (!file.eof()) {
            std::string type;
            getline(file, type);
            if (type == "Toy") {
                Products::Fun::Toy* obj = new Products::Fun::Toy();
                obj->loadFromFile(file);
                items.push_back(obj);

            }
            else if (type == "Book") {
                Products::Fun::Book* obj = new Products::Fun::Book();
                obj->loadFromFile(file);
                items.push_back(obj);

            }
            else if (type == "Clothing") {
                Sport::Clothing* obj = new Sport::Clothing();
                obj->loadFromFile(file);
                items.push_back(obj);

            }
            else if (type == "BoarGame") {
                Products::Fun::BoardGame* obj = new Products::Fun::BoardGame();
                obj->loadFromFile(file);
                items.push_back(obj);

            }
        }
        file.close();
    }
}