/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Map.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Defining methods of Map class
 */

#include <gnuplot-iostream.h>
#include <vector>
#include <string>
#include <map>
#include <Map.hpp>
#include <Obstacle.hpp>

using std::vector;
using std::string;
using std::pair;
using std::make_pair;
using std::cout;
using std::cin;
using std::endl;

Map::Map() {
  // Initializing values to the attributes of Map class
  length = 0;
  width = 0;
  robotL = 0.0;
  robotW = 0.0;
}

Map::~Map() {
  // Destructor stub
}

void Map::createMap(int l, int w, char demo) {
  if (demo == 'Y') {
    // Initializing values to the attributes of Map class
    robotL = 1.0;
    robotW = 1.0;
    length = 100;
    width = 100;
    int noOb = 2;
    // Create an object of class Obstacle.
    vector<Obstacle> O(noOb);
    // Calculate the vertices from the given data
    O[0].calculateVertices(30.0, 40.0, 10.0, 10.0);
    // Add the robot dimension to the obstacle
    O[0].createObstacleSpace(robotL, robotW, length, width);
    // Calculate the vertices from the given data
    O[1].calculateVertices(70.0, 70.0, 10.0, 10.0);
    // Add the robot dimension to the obstacle
    O[1].createObstacleSpace(robotL, robotW, length, width);
    int i = 0;
    // Add the obstacle space to xy_pts to plot
    while (i < noOb) {
      int j = O[i].x1;
      while (j <= O[i].x2) {
        int k = O[i].y1;
        while (k <= O[i].y3) {
          xy_pts.push_back(make_pair(j, k));
          // Create new key-value pairs for obstacle space
          obstacleSpace[make_pair(j, k)] = 1;
          k++;
        }
        j++;
      }
      i++;
    }
    i = 0;
    // Create new key value pairs
    // map creates new key value pair and initializes to zero if key not found
    while (i <= width) {
      int j = 0;
      while (j <= length) {
        // Initialize parent cost to zero
        parentCost[make_pair(i, j)] = 0.0;
        // Initialize current cost to zero
        currentCost[make_pair(i, j)] = 0.0;
        // Initialize visited nodes to zero
        visitedNodes[make_pair(i, j)] = 0;
        // Check if key value pair in obstacle already created
        if (obstacleSpace[make_pair(i, j)] == 1) {
          // Add obstacle space to visited nodes
          visitedNodes[make_pair(i, j)] = 1;
        }
        j++;
      }
      i++;
    }
  } else {
    length = l;
    width = w;
    bool robotD = false;
    while (robotD == false) {
      // Ask to user to enter the robot dimension
      cout << "Enter the robot length and width: ";
      cin >> robotL >> robotW;
      if (robotL >= 0.0 && robotW >= 0.0 && robotL <= width
          && robotW <= length) {
        robotD = true;
      } else {
        cout << "Wrong robot dimension entered. Please re-enter" << endl;
      }
    }
    int noOb = 0;
    // Ask the user for number of obstacles in the map
    cout << "Enter the number of rectangular obstacles in the map: ";
    cin >> noOb;
    // Create an object of class Obstacle.
    vector<Obstacle> O(noOb);
    vector<pair<double, double> > centerXY;
    double x = 0.0, y = 0.0, lR = 0.0, wR = 0.0;
    int i = 0;
    while (i < noOb) {
      // Ask user for the center (x,y) of the rectangle
      cout << "Enter the x and y coordinate of center the rectangle: ";
      cin >> x >> y;
      // Form a pair of x,y and add to the vector
      centerXY.push_back(make_pair(x, y));
      // Ask the user for the length and breadth of the rectangle
      cout << "Enter the length and breadth of the rectangle: ";
      cin >> lR >> wR;
      // Calculate the vertices from the given data
      O[i].calculateVertices(x, y, lR, wR);
      // Verify the obstacle lies within the map boundaries
      bool verify = O[i].verifyObstacle(length, width);
      if (verify == true) {
        // Add the robot dimension to the obstacle
        O[i].createObstacleSpace(robotL, robotW, length, width);
        i++;
      } else {
        cout << "Wrong dimension entered. Please enter again." << endl;
      }
    }
    i = 0;
    // Add the obstacle space to xy_pts to plot
    while (i < noOb) {
      int j = O[i].x1;
      while (j <= O[i].x2) {
        int k = O[i].y1;
        while (k <= O[i].y3) {
          xy_pts.push_back(make_pair(j, k));
          // Create new key-value pairs for obstacle space
          obstacleSpace[make_pair(j, k)] = 1;
          k++;
        }
        j++;
      }
      i++;
    }
    i = 0;
    // Create new key value pairs
    // map creates new key value pair and initializes to zero if key not found
    while (i <= width) {
      int j = 0;
      while (j <= length) {
        // Initialize parent cost to zero
        parentCost[make_pair(i, j)] = 0.0;
        // Initialize current cost to zero
        currentCost[make_pair(i, j)] = 0.0;
        // Initialize visited nodes to zero
        visitedNodes[make_pair(i, j)] = 0;
        // Check if key value pair in obstacle already created
        if (obstacleSpace[make_pair(i, j)] == 1) {
          // Add obstacle space to visited nodes
          visitedNodes[make_pair(i, j)] = 1;
        }
        j++;
      }
      i++;
    }
  }
}

void Map::showMap(pair<int, int> startNode, pair<int, int> endNode,
                  vector<pair<int, int> > path) {
  Gnuplot gp;
  // Create a plot of length l(Y-axis) and width w(X-axis)
  gp << "set xrange [0:" << width << "]\nset yrange [0:" << length << "]\n";
  gp << "set title \"A* search\"\n";
  gp << "set pointsize 1\n";
  gp << "set xlabel \"Width\"\n";
  gp << "set ylabel \"Length\"\n";
  gp << "set key outside\n";
  gp << "plot '-' with points pointtype 7 title 'Obstacle' , "
     << "'-' with points pointtype 1 title 'Optimal path' , "
     << "'-' with points pointtype 5 title 'Start and End nodes'"
     << endl;
  gp.send1d(xy_pts);
  gp.send1d(path);
  vector<pair<int, int> > startEnd;
  startEnd.push_back(startNode);
  startEnd.push_back(endNode);
  gp.send1d(startEnd);
}

void Map::changeRobotDimension(double length, double width) {
  // Update the robot length and width
  robotL = length;
  robotW = width;
}
