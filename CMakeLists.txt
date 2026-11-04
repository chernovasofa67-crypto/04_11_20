cmake_minimum_required(VERSION 4.2)
project(04_11_20)

set(CMAKE_CXX_STANDARD 20)

add_executable(04_11_20 main.cpp
        Product.h
        Product.cpp
        Clothing.cpp
        Clothing.h
        Toy.cpp
        Toy.h
        Book.cpp
        Book.h
        BoardGame.cpp
        BoardGame.h
        Lottery.cpp
        Lottery.h
)
