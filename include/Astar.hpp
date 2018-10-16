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
#include <Map.hpp>

/**
 * @brief Class declaration for A* algorithm
 */
class Astar : public Map {
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
   *   @return bool value specifying valid or invalid start/end nodes
   */
  bool verifyNodes();

  /**
   *   @brief Decide which action to take in the A* algorithm
   *
   *   @param int value of action number
   *   @param pair of int value of current node
   *
   *   @return pair of int value specifying new node
   */
  std::pair<int, int> action(int i, std::pair<int, int> currentNode);

  std::vector<std::pair<int, int> > path;
  std::pair<int, int> startNode;
  std::pair<int, int> endNode;
  std::vector<std::pair<double, std::pair<int, int> > > queue;
};

#endif  // CPP_BOILERPLATE_INCLUDE_ASTAR_HPP_
