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

#include <vector>
#include <Map.hpp>
#include <gnuplot-iostream.h>

using std::vector;

Map::Map() {
  // Initializing values to the attributes of Map class
  length = -0.1;
  width = -0.1;
}

Map::~Map() {
  // Destructor stub
}

void Map::createMap(double l, double w) {
  length = l;
  width = w;
  Gnuplot gp;
  vector<std::pair<double, double> > xy_pts;
  for (double x = -2; x < 2; x += 0.1) {
    double y = x * x;
    xy_pts.push_back(std::make_pair(x, y));
  }
  gp << "set xrange [0:" << l << "]\nset yrange [0:" << w << "]\n";
  // '-' means read from stdin.  The send1d() function sends data to gnuplot's stdin.
  gp << "plot'-'with points\n";
  gp.send1d(xy_pts);
}

void Map::showMap() {
  // ToDo Display the plot of the map
}
