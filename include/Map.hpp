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

#ifndef CPP_BOILERPLATE_INCLUDE_MAP_HPP_
#define CPP_BOILERPLATE_INCLUDE_MAP_HPP_

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
   *   @param double value of length of the map
   *   @param double value of width of the map
   *
   *   @return none
   */
  void createMap(double l, double w);

  /**
   *   @brief Call this method to modify the Map
   *
   *   @param none
   *
   *   @return none
   */

  void showMap();

  double length, width;
};

#endif  // CPP_BOILERPLATE_INCLUDE_MAP_HPP_
