//
// Created by Евгения on 04.11.2026.
//

#ifndef INC_04_11_20_TOY_H
#define INC_04_11_20_TOY_H


#pragma once
#include "Product.h"

namespace Products {
    namespace Fun {
        class Toy :
            public Product
        {
        protected:
            std::string material;
        public:
            Toy();
            Toy(std::string name, std::string producer, float price, int age,std::string material);

            void setMaterial(std::string material);
            std::string getMaterial()const;

            virtual void show()const override;
            virtual float calcPrice()const override;
            virtual void saveToFile(std::ofstream& file) const override;
            virtual void loadFromFile(std::ifstream& file) override;
        };
    }
}


#endif //INC_04_11_20_TOY_H
