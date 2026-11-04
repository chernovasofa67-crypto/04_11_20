#include "Product.h"
#include "Product.h"

Products::Product::Product()
{
    name = "undefined";
    producer = "undefined";
    price = 0;
    age = 0;
}

Products::Product::Product(std::string name, std::string producer, float price, int age)
{
    this->name = name;
    this->producer = producer;
    this->price = price;
    this->age = age;
}

Products::Product::~Product()
{
}

void Products::Product::setName(std::string name)
{
    this->name = name;
}

void Products::Product::setProducer(std::string producer)
{
    this->producer = producer;
}

void Products::Product::setPrice(float price)
{
    this->price = price;
}

void Products::Product::setAge(int age)
{
    this->age = age;
}

std::string Products::Product::getName() const
{
    return name;
}

std::string Products::Product::getProducer() const
{
    return producer;
}

float Products::Product::getprice() const
{
    return price;
}

int Products::Product::getAge() const
{
    return age;
}
