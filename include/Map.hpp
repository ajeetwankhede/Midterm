/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Map.hpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Map class declaration
 */

#ifndef INCLUDE_MAP_HPP_
#define INCLUDE_MAP_HPP_

#include <map>
#include <vector>

/**
 * @brief Class declaration for Map
 */
class Map {
 public:
  /**
   * @brief Constructor
   */
  Map();

  /**
   * @brief Destructor
   */
  virtual ~Map();

  /**
   *   @brief Call this method to create a new Map
   *
   *   @param int value of length of the map
   *   @param int value of width of the map
   *
   *   @return none
   */
  void createMap(int l, int w);

  /**
   *   @brief Call this method to modify the Map
   *
   *   @param pair of int value of (x,y) coordinates of start node
   *   @param pair of int value of (x,y) coordinates of end node
   *   @param vector of pair of int value of (x,y) coordinates of path
   *
   *   @return none
   */

  void showMap(std::pair<int, int> startNode, std::pair<int, int> endNode,
               std::vector<std::pair<int, int> > path);

  /**
   *   @brief Change the dimension of the robot
   *
   *   @param double value of length of the robot
   *   @param double value of width of the robot
   *
   *   @return none
   */
  void changeRobotDimension(double length, double width);

  int length, width;
  double robotL, robotW;
  std::vector<std::pair<int, int> > xy_pts;
  std::map<std::pair<int, int>, int> obstacleSpace;
  std::map<std::pair<int, int>, int> visitedNodes;
  std::map<std::pair<int, int>, double> parentCost;
  std::map<std::pair<int, int>, double> currentCost;
  std::map<std::pair<int, int>, std::pair<int, int> > parentNode;
};

#endif  // INCLUDE_MAP_HPP_
