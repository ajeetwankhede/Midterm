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
   *   @param int value of length of the map
   *   @param int value of width of the map
   *
   *   @return bool value True if obstacle lies within map boundaries else False
   */
  bool verifyObstacle(const int length, const int width);

  /**
   *   @brief Add the largest robot dimension to the obstacle dimensions to avoid collision
   *
   *   @param double value of length of robot
   *   @param double value of width of robot
   *   @param int value of length of the map
   *   @param int value of width of the map
   *
   *   @return none
   */
  void createObstacleSpace(double robotL, double robotW, int length, int width);

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
};

#endif  // CPP_BOILERPLATE_INCLUDE_OBSTACLE_HPP_
