//
// Created by Евгения on 04.11.2026.
//

#ifndef INC_04_11_20_CLOTHING_H
#define INC_04_11_20_CLOTHING_H


#pragma once
#include "Product.h"

namespace Sport {
    class Clothing : public Products:: Product
    {
    protected:
        std::string clothingType;
        std::string size;
        int targetAge;
    public:
        Clothing();
        Clothing(std::string name, std::string producer, float price, int age, std::string clothingType, std::string size, int targetAge);

        void setClothingType(std::string clothingType);
        std::string getClothingType() const;

        void setSize(std::string size);
        std::string getSize() const;

        void setTargetAge(int targetAge);
        int getTargetAge() const;

        virtual void show() const override;
        virtual float calcPrice() const override;
        virtual void saveToFile(std::ofstream& file) const override;
        virtual void loadFromFile(std::ifstream& file) override;
    };
}



#endif //INC_04_11_20_CLOTHING_H
