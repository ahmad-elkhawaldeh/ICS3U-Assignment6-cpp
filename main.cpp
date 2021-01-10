// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program calculates the area of trapzoid

#include <iostream>

void area_trapzoid(float Base1, float Base2, float height ) {
    float area;
    float length=Base1+Base2;
    area = 0.5 * (Base1 + Base2) * height;
    std::cout << "The area of the trapzoid is " << (area)<< " cm² " << std::endl;
}

int main() {
    float Base1_2;
    float Base2_2;
    float Height_2;
    float area;
    std::string Base1;
    std::string Base2;
    std::string Height_of_Trapezoid;

    std::cout << "Enter Base1: ";
    std::cin >> Base1;
    std::cout << "Enter Base2: ";
    std::cin >> Base2;
    std::cout << "Enter height: ";
    std::cin >> Height_of_Trapezoid;

try {

Base1_2 = std::stof(Base1);
Base2_2 = std::stof(Base2);
Height_2 = std::stof(Height_of_Trapezoid);
area_trapzoid(Base1_2, Base2_2, Height_2);
}
catch (std::invalid_argument) {
std::cout << "That was not a valid integer" << std::endl;
}
}
