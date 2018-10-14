/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    main.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  main for running the path planning module
 */

#include <iostream>
#include <memory>
#include <vector>
#include <Map.hpp>

using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::cin;
using std::endl;

int main() {
  // Create an object of class Map.
  shared_ptr<Map> MAP;
  MAP = make_shared<Map>();
  double l = 0.0, w = 0.0;
  // Ask user for length and width of Map
  cout << "Enter the length and width of map: " << endl;
  cin >> l >> w;
  MAP->createMap(l, w);
  return 0;
}
