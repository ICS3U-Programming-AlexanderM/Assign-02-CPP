// Copyright (c) 2021 Alexander Matheson All rights reserved.
//
// Created by: Alexander Matheson
// Created on: Dec 1, 2021
// This program asks the user for the radius
// and units for a sphere. It then calculates
// and displays the volume and surface area.
#include <iostream>
#include <cmath>

// declare variables
float radius, volume, surfaceArea;
std::string units;

int main() {
  // get input from user
  std::cout << "\033[1;31mToday we will calculate the volume and\033[0m\n";
  std::cout << "\033[1;31msurface area of a sphere.\033[0m\n";
  std::cout << "\033[1;31mEnter the units: \033[0m";
  std::cin >> units;
  std::cout << "\033[1;31mEnter the radius: \033[0m";
  std::cin >> radius;

  // calculate surface area and volume
  volume = M_PI*4/3*pow(radius, 3);
  surfaceArea = 4*M_PI*pow(radius, 2);

  // round volume and surface area
  volume = volume * 100;
  volume = round(volume);
  volume = volume / 100;

  surfaceArea = surfaceArea * 100;
  surfaceArea = round(surfaceArea);
  surfaceArea = surfaceArea / 100;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "\033[;32mVolume = " << volume << " " << units << "^3.\033[0m\n";
  std::cout << "\033[;32mSurface area = " << surfaceArea << " "
  << units << "^2.\033[0m\n";
}
