/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Output.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *   Defining methods of Output class
 */

#include <Output.hpp>

Output::Output() {
  // Initializing values to the attributes of Output class
  location = "path";
}

Output::~Output() {
  // Destructor stub
}

void Output::writeTextFile() {
  // ToDo Write a code to save the trajectory coordinates in a text file
}

void Output::showOutput() {
  // ToDo Display the output of A* on a plot
}
