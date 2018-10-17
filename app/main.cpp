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

#include <Astar.hpp>

int main() {
  // Create an object of class Map.
  Astar A;
  A.runAstar();
  return 0;
}
