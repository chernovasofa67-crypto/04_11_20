//
// Created by Евгения on 04.11.2026.
//

#ifndef INC_04_11_20_PRODUCT_H
#define INC_04_11_20_PRODUCT_H

#pragma once
#include <iostream>
#include <string>
#include <fstream>

namespace Products {
    class Product
    {
    protected:
        std::string name;
        std::string producer;
        float price;
        int age;
    public:
        Product();
        Product(std::string name,std::string producer,float price,int age);
        virtual ~Product();

        void setName(std::string name);
        void setProducer(std::string producer);
        void setPrice(float price);
        void setAge(int age);

        std::string getName()const;
        std::string getProducer()const;
        float getprice()const;
        int getAge()const;

        virtual void show()const = 0;
        virtual float calcPrice()const = 0;
        virtual void saveToFile(std::ofstream& file) const = 0;
        virtual void loadFromFile(std::ifstream& file) = 0;
    };
}



#endif //INC_04_11_20_PRODUCT_H
