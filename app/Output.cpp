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

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <Output.hpp>

using std::vector;
using std::string;
using std::pair;
using std::ofstream;
using std::cout;
using std::endl;

Output::Output() {
  // Constructor stub
}

Output::~Output() {
  // Destructor stub
}

void Output::writeTextFile(vector<pair<int, int> > path) {
  string location = "../output/path.txt";
  // Save the trajectory coordinates in a text file
  ofstream myFile;
  myFile.open(location);
  myFile << "The x and y coordinates of the optimal trajectory are:\n";
  myFile << "X\tY\n";
  for (auto i : path) {
    myFile << i.first << "\t" << i.second << "\n";
  }
  myFile.close();
  cout << "A text file with trajectory coordinates has been saved at "
      << location << endl;
}

void Output::showOutput(vector<pair<int, int> > path) {
  // Output the trajectory coordinates
  for (auto i : path) {
    cout << i.first << "\t" << i.second << endl;
  }
}
