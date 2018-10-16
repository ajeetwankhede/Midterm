# C++ Boilerplate
[![Build Status](https://travis-ci.org/ajeetwankhede/Midterm.svg?branch=master)](https://travis-ci.org/ajeetwankhede/Midterm) 
[![Coverage Status](https://coveralls.io/repos/github/ajeetwankhede/Midterm/badge.svg?branch=master)](https://coveralls.io/github/ajeetwankhede/Midterm?branch=master)
---

## Author Name for Sprint 1
Driver: Ajeet Wankhede
Navigator: Likhita Madiraju

## Author Name for Sprint 2
Driver: Likhita Madiraju
Navigator: Ajeet Wankhede

## Project Overview

A 2D path planner with A* algorithm will be designed and developed, for Acme Robotics, for the navigation of their TurtleBot 2, in a known warehouse environment. The path planner will assist the TurtleBot in maneuvering through the warehouse for autonomous surveillance. The A* algorithm will ensure optimality of the path, with obstacle avoidance defined in the floor plan. The output of the path planner will be a trajectory of the robot defined by Cartesian coordinates. A controller module, developed by Acme Robotics, will monitor the velocity of the robot and ensure it is following the path provided. The robot also has a 2D LIDAR sensor to detect humans in its path with the help of perception module developed
by Acme Robotics.

## TODO
1. Complete the stub implementations.
2. Run the continuous integration.

## Link for SIP document
https://docs.google.com/spreadsheets/d/1-j5CXI1eY91Z-8jk83BunUeLEoEDe8iBQdnBuzrfptE/edit?usp=sharing 

## Dependencies

The path planning module has following dependencies:
1. googletest
2. cmake
3. gnuplot
4. gnuplot-iostream(http://stahlke.org/dan/gnuplot-iostream/)

## Standard install via command-line
```
git clone --recursive https://github.com/ajeetwankhede/Midterm
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/ajeetwankhede/Midterm
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of cpp-boilerplate

```
cd ~/workspace
mkdir -p boilerplate-eclipse
cd boilerplate-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../Midterm/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "boilerplate-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold boilerplate-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the boilerplate-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)


## How to generate Doxygen report

```
sudo apt-get install doxygen
sudo apt install doxygen-gui
doxywizard
```
Open doxywizard and select the workspace as the repository. Fill the details as required and set the source code folder to the repository. Create a new folder in the repository and select that as the destination directory. Proceed with the default settings and generate the documentation.
