//
// Created by Евгения on 04.11.2026.
//


#include "Toy.h"

Products::Fun::Toy::Toy()
{
    material = "undefined";
}

Products::Fun::Toy::Toy(std::string name, std::string producer, float price, int age, std::string material)
    :Product(name,producer,price,age)
{
    this->material = material;
}

void Products::Fun::Toy::setMaterial(std::string material)
{
    this->material = material;
}

std::string Products::Fun::Toy::getMaterial() const
{
    return material;
}

void Products::Fun::Toy::show() const
{
    std::cout << "\t TOY: \n";
    std::cout << "name: " << name << std::endl;
    std::cout << "producer: " << producer << std::endl;
    std::cout << "price: " << price << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "material: " << material << std::endl;
}

float Products::Fun::Toy::calcPrice() const
{
    float total = price;
    if (material == "wood") {
        total += price * 0.2;
    }
    if (age <= 3) {
        total += price * 0.1;
    }
    return total;
}

void Products::Fun::Toy::saveToFile(std::ofstream& file) const
{
    file << "Toy\n";
    file << name << std::endl;
    file << producer << std::endl;
    file << price << std::endl;
    file << age << std::endl;
    file << material << std::endl;
}

void Products::Fun::Toy::loadFromFile(std::ifstream& file)
{
    getline(file, name);
    getline(file, producer);
    file >> price;
    file >> age;
    file.ignore();
    getline(file, material);
}