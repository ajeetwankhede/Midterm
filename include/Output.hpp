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

#ifndef CPP_BOILERPLATE_INCLUDE_OUTPUT_HPP_
#define CPP_BOILERPLATE_INCLUDE_OUTPUT_HPP_

#include <string>

/**
 * @brief Class declaration for displaying the output
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
   *   @param none
   *
   *   @return none
   */
  void writeTextFile();

  /**
   *   @brief Display the output trajectory in a plot
   *
   *   @param none
   *
   *   @return none
   */
  void showOutput();

 private:
  std::string location;
};

#endif  // CPP_BOILERPLATE_INCLUDE_OUTPUT_HPP_
