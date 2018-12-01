/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Output.hpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Output class declaration
 */

#ifndef INCLUDE_OUTPUT_HPP_
#define INCLUDE_OUTPUT_HPP_

#include <string>
#include <vector>
#include <utility>

/**
 * @brief Class declaration for Outputlaying the Output
 */
class Output {
 public:
  /**
   * @brief Constructor
   */
  Output();

  /**
   * @brief Destructor
   */
  virtual ~Output();

  /**
   *   @brief Write the trajectory coordinates found by A* in a text file
   *
   *   @param vector of pair of int value of (x,y) coordinates of path
   *
   *   @return none
   */
  void writeTextFile(std::vector<std::pair<int, int> > path);

  /**
   *   @brief Output the trajectory coordinates
   *
   *   @param none
   *
   *   @return none
   */
  virtual void showOutput(int i);
  std::vector<std::pair<int, int> > path;
};

#endif  // INCLUDE_OUTPUT_HPP_
