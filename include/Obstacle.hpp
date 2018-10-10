/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Obstacle.hpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Obstacle class declaration
 */

#ifndef CPP_BOILERPLATE_INCLUDE_OBSTACLE_HPP_
#define CPP_BOILERPLATE_INCLUDE_OBSTACLE_HPP_

/**
 * @brief Class declaration for obstacle
 */
class Obstacle {
 public:
  /**
   * @brief Constructor
   */
  Obstacle();

  /**
   * @brief Destructor
   */
  virtual ~Obstacle();

  /**
   *   @brief Check if obstacle lies within map boundaries
   *
   *   @param double value of length of the map
   *   @param double value of width of the map
   *
   *   @return bool value True if obstacle lies within map boundaries else False
   */
  bool verifyObstacle(double length, double width);

  /**
   *   @brief Change the dimension of the robot
   *
   *   @param double value of length of the robot
   *   @param double value of width of the robot
   *
   *   @return none
   */
  void changeRobotDimension1(double length, double width);

  /**
   *   @brief Add the largest robot dimension to the obstacle dimensions to avoid collision
   *
   *   @param none
   *
   *   @return none
   */
  void createObstacleSpace();

  /**
   *   @brief Calculate the vertices of rectangle from the given center coordinates and dimensions
   *
   *   @param double value of x coordinate of center
   *   @param double value of y coordinate of center
   *   @param double value of length of the rectangle
   *   @param double value of width of the rectangle
   *
   *   @return none
   */
  void calculateVertices(double centerX, double centerY, double length,
                         double width);

  double x1, x2, x3, x4, y1, y2, y3, y4;
  double robotL, robotW;
};

#endif  // CPP_BOILERPLATE_INCLUDE_OBSTACLE_HPP_
