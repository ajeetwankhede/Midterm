/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Astar.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Defining methods of Astar class
 */

#include <vector>
#include <string>
#include <Astar.hpp>

using std::vector;
using std::string;

Astar::Astar() {
  // Initializing values to the attributes of Astar class
  startNode = -0.1;
  endNode = -0.1;
  resolution = -0.1;
  pathX.push_back(0.0);
  pathY.push_back(0.0);
}

Astar::~Astar() {
  // Destructor stub
}

void runAstar() {
  // ToDo Create a map
  // ToDo Set and verify the start and end nodes
  // ToDo Set the resolution
  // ToDo Define the cost function and heuristic function
  // ToDo Write a code for A* algorithm to find trajectory
  // ToDo Show the output
}

string verifyNodes() {
  // ToDo Return a string after verifying the start and end nodes
  return "Invalid";
}
