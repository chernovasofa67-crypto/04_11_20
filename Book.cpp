//
// Created by Евгения on 04.11.2026.
//

#include "Book.h"

#include "Book.h"

using std::cout;
using std::cin;

Products::Fun::Book::Book()
{
    author = "noname";
    ganre = "undefined";
    numberOfPages = 0;
}

Products::Fun::Book::Book(std::string name, std::string manufacture, float price, int age, std::string author, std::string ganre, int numberOfPages)
{
    this->author = author;
    this->ganre = ganre;
    this->numberOfPages = numberOfPages;
}

Products::Fun::Book::~Book()
{
    cout << "\ndestroyed derived class book\n";
}

void Products::Fun::Book::setAuthor(std::string author)
{
    this->author = author;
}

std::string Products::Fun::Book::getAuthor() const
{
    return author;
}

void Products::Fun::Book::setGanre(std::string ganre)
{
    this->ganre = ganre;
}

std::string Products::Fun::Book::getGanre() const
{
    return ganre;
}

void Products::Fun::Book::setNumberOfPages(int numberOfPages)
{
    this->numberOfPages = numberOfPages;
}

int Products::Fun::Book::getNumberOfPages() const
{
    return numberOfPages;
}

void Products::Fun::Book::show() const
{
    cout << "\nBook" <<
        "\nName:\t" << name <<
        "\nManufacture:\t" << producer <<
        "\nPrice:\t" << price <<
        "\nAge:\t" << age <<
        "\nAuthor:\t" << author <<
        "\nGanre:\t" << ganre <<
        "\nNumber of pages:\t" << numberOfPages << "\n";
}

float Products::Fun::Book::calcPrice() const
{
    float total = price;
    total = price * ((numberOfPages / 100) * 0.08);
    if (age <= 12) {
        total += price * 0.1;
    }
    return total;
}

void Products::Fun::Book::saveToFile(std::ofstream& file) const
{
    file << "Book" <<
        "\n" << name <<
        "\n" << producer <<
        "\n" << price <<
        "\n" << age <<
        "\n" << author <<
        "\n" << ganre <<
        "\n" << numberOfPages << std::endl;
}

void Products::Fun::Book::loadFromFile(std::ifstream& file)
{
    getline(file, name);
    getline(file, producer);
    file >> price;
    file >> age;
    file.ignore();
    getline(file, author);
    getline(file, ganre);
    file >> numberOfPages;
    file.ignore();
}