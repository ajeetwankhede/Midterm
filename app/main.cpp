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
#include <Astar.hpp>

using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::cin;
using std::endl;

int main() {
  // Create an object of class Map.
  shared_ptr<Astar> A;
  A = make_shared<Astar>();
  A->runAstar();
  return 0;
}
