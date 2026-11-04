#include "Clothing.h"

Sport::Clothing::Clothing()
{
    clothingType = "undefined";
    size = "M";
    targetAge = 0;
}

Sport::Clothing::Clothing(std::string name, std::string producer, float price, int age, std::string clothingType, std::string size, int targetAge)
    : Product(name, producer, price, age)
{
    this->clothingType = clothingType;
    this->size = size;
    this->targetAge = targetAge;
}

void Sport::Clothing::setClothingType(std::string clothingType)
{
    this->clothingType = clothingType;
}

std::string Sport::Clothing::getClothingType() const
{
    return clothingType;
}

void Sport::Clothing::setSize(std::string size)
{
    this->size = size;
}

std::string Sport::Clothing::getSize() const
{
    return size;
}

void Sport::Clothing::setTargetAge(int targetAge)
{
    this->targetAge = targetAge;
}

int Sport::Clothing::getTargetAge() const
{
    return targetAge;
}

void Sport::Clothing::show() const
{
    std::cout << "\t CLOTHING: \n";
    std::cout << "name: " << name << std::endl;
    std::cout << "producer: " << producer << std::endl;
    std::cout << "price: " << price << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "clothingType: " << clothingType << std::endl;
    std::cout << "size: " << size << std::endl;
    std::cout << "targetAge: " << targetAge << std::endl;
}

float Sport::Clothing::calcPrice() const
{
    float total = price;
    if (size == "XL" || size == "XXL" || size == "XXXL") {
        total += price * 0.05;
    }
    if (targetAge <= 14) {
        total += price * 0.1;
    }
    return total;
}

void Sport::Clothing::saveToFile(std::ofstream& file) const
{
    file << "Clothing\n";
    file << name << std::endl;
    file << producer << std::endl;
    file << price << std::endl;
    file << age << std::endl;
    file << clothingType << std::endl;
    file << size << std::endl;
    file << targetAge << std::endl;
}

void Sport::Clothing::loadFromFile(std::ifstream& file)
{
    getline(file, name);
    getline(file, producer);
    file >> price;
    file >> age;
    file.ignore();
    getline(file, clothingType);
    getline(file, size);
    file >> targetAge;
    file.ignore();
}
