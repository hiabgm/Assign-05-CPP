// Created by: Hiab G
// Created on: June 9

#include <iostream>
#include <cmath>


// function to calculate distance using distance formula
float calculate_distance(float x1, float y1, float x2, float y2) {
    // Distance formula
    float distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    return distance;
}

int main() {
    std::cout << "Welcome! Enter 2 points to calculate the distance between them" << std::endl;

try {
// Getting user input for the 4 points
    float x1, y1, x2, y2;
    std::cout << "Enter x1: ";
    std::cin >> x1;
    std::cout << "Enter y1: ";
    std::cin >> y1;
    std::cout << "Enter x2: ";
    std::cin >> x2;
    std::cout << "Enter y2: ";
    std::cin >> y2;

    // checks if the given points are the same
    if (x1 != x2 || y1 != y2) {
    // checks if the given points are equal to 0 or not
    if (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0) {
std::cout << "Distance: " << calculate_distance(x1, y1, x2, y2) << std::endl;}
    else {
    std::cout << "There's no distance between given points." << std::endl;}
}

    else {
    std::cout << "There's no distance between given points." << std::endl;}
}
    catch (std::invalid_argument) {
    std::cout << "Invalid input! Please enter numbers." << std::endl;
    }
}