//
// Created by Евгения on 04.11.2026.
//

#ifndef INC_04_11_20_BOARDGAME_H
#define INC_04_11_20_BOARDGAME_H


#pragma once
#include "Product.h"

namespace Products {
    namespace Fun {
        class BoardGame :
         public Product
        {
        protected:
            int quantity;
        public:
            BoardGame();
            BoardGame(std::string name, std::string producer, float price, int age,int quantity);

            void setQuantity(int quantity);
            int getQuantity()const;

            virtual void show()const override;
            virtual float calcPrice()const override;
            virtual void saveToFile(std::ofstream& file)const override;
            virtual void loadFromFile(std::ifstream& file) override;
        };
    }
}

#endif //INC_04_11_20_BOARDGAME_H
