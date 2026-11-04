//
// Created by Евгения on 04.11.2026.
//

#ifndef INC_04_11_20_BOOK_H
#define INC_04_11_20_BOOK_H


#pragma once
#include "Product.h"
#include <string>
#include <fstream>

namespace Products {
    namespace Fun {

        class Book : public Products::Product {
        protected:
            std::string author;
            std::string ganre;
            int numberOfPages;

        public:
            Book();
            Book(std::string name, std::string manufacture, float price, int age,
                 std::string author, std::string genre, int numberOfPages);
            ~Book();

            void setAuthor(std::string author);
            std::string getAuthor() const;

            void setGanre(std::string genre); // Исправлено: setGenre
            std::string getGanre() const;    // Исправлено: getGenre

            void setNumberOfPages(int numberOfPages);
            int getNumberOfPages() const;

            void show() const override;
            float calcPrice() const override;
            void saveToFile(std::ofstream& file) const override;
            void loadFromFile(std::ifstream& file) override; // Добавлено override, если функция виртуальная
        };

    }
}




#endif //INC_04_11_20_BOOK_H
