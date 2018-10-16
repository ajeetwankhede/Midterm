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
  x1 = 0;
  x2 = 0;
  x3 = 0;
  x4 = 0;
  y1 = 0;
  y2 = 0;
  y3 = 0;
  y4 = 0;
}

Obstacle::~Obstacle() {
  // Destructor stub
}

bool Obstacle::verifyObstacle(const int length, const int width) {
  // Check if obstacle lies within map boundaries
  bool verify = false;
  if (x1 >= 0 && y1 >= 0) {
    if (x2 <= width || y3 <= length) {
      verify = true;
    }
  }
  return verify;
}

void Obstacle::createObstacleSpace(double robotL, double robotW, int length,
                                   int width) {
  // Add the largest dimension of robot to the obstacle dimensions
  double largest = 0.0;
  if (robotL >= robotW) {
    largest = robotL;
  } else {
    largest = robotW;
  }
  // Check whether after adding robot dimension the new obstacle
  // is still within the map boundaries
  if (((double) x1 - largest) >= 0 && ((double) y1 - largest) >= 0) {
    x1 = (int) (x1 - largest);
    y1 = (int) (y1 - largest);
    y2 = y1;
    x4 = x1;
  } else {
    x1 = 0;
    y1 = 0;
    y2 = y1;
    x4 = x1;
  }
  if (((double) x2 + largest) <= (double) width
      && ((double) y3 + largest) <= (double) length) {
    x2 = (int) (x2 + largest);
    y3 = (int) (y3 + largest);
    x3 = x2;
    y4 = y3;
  } else {
    x2 = width;
    y3 = length;
    x3 = x2;
    y4 = y3;
  }
}

void Obstacle::calculateVertices(double centerX, double centerY, double length,
                       double width) {
  // Calculate the vertices of the rectangle from the given data
  x1 = (int) (centerX - width / 2);
  y1 = (int) (centerY - length / 2);
  x2 = (int) (centerX + width / 2);
  y2 = y1;
  x3 = x2;
  y3 = (int) (centerY + length / 2);
  x4 = x1;
  y4 = y3;
}
