/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Obstacle.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Defining methods of Obstacle class
 */

#include <iostream>
#include <Obstacle.hpp>

Obstacle::Obstacle() {
  // Initializing values to the attributes of Obstacle class
  x1 = 0.0;
  x2 = 0.0;
  x3 = 0.0;
  x4 = 0.0;
  y1 = 0.0;
  y2 = 0.0;
  y3 = 0.0;
  y4 = 0.0;
  robotL = 0.0;
  robotW = 0.0;
}

Obstacle::~Obstacle() {
  // Destructor stub
}

bool verifyObstacle(double length, double width) {
  // ToDo Check if obstacle lies within map boundaries
  // ToDo Return true if obstacle is inside the map boundaries else return false
  return false;
}

void changeRobotDimension1(double length, double width) {
  // ToDo Change the robot length and width
}

void createObstacleSpace() {
  // ToDo Add the largest dimension of robot to the obstacle dimensions
}

void calculateVertices(double centerX, double centerY, double length,
                       double width) {
  // ToDo Write a code to calculate the vertices of
  // the rectangle from the given data
}
