/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Astar.hpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Astar class declaration
 */

#ifndef CPP_BOILERPLATE_INCLUDE_ASTAR_HPP_
#define CPP_BOILERPLATE_INCLUDE_ASTAR_HPP_

#include <string>
#include <vector>

/**
 * @brief Class declaration for A* algorithm
 */
class Astar {
 public:
  /**
   * @brief Constructor
   */
  Astar();

  /**
   * @brief Destructor
   */
  virtual ~Astar();

  /**
   *   @brief Run the A* algorithm
   *
   *   @param none
   *
   *   @return none
   */
  void runAstar();

  /**
   *   @brief Verify the start and end nodes for the A* algorithm
   *
   *   @param none
   *
   *   @return string value specifying valid or invalid start/end nodes
   */
  std::string verifyNodes();

  std::vector<double> pathX;
  std::vector<double> pathY;

  double startNode;
  double endNode;
  double resolution;
};

#endif  // CPP_BOILERPLATE_INCLUDE_ASTAR_HPP_
