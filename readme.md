# C++ Boilerplate
[![Build Status](https://travis-ci.org/ajeetwankhede/Midterm.svg?branch=master)](https://travis-ci.org/ajeetwankhede/Midterm) 
[![Coverage Status](https://coveralls.io/repos/github/ajeetwankhede/Midterm/badge.svg?branch=master)](https://coveralls.io/github/ajeetwankhede/Midterm?branch=master)
---

## Author Name for Sprint 1
Driver: Ajeet Wankhede
Navigator: Likhita Madiraju

## Overview

Path planning module designed for Acme Robotics as a part of Midterm project for ENPM808X

## TODO
1. Complete the stub implementations.
2. Run the continuous integration.
To check if PID controller converges in given time.
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
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../cpp-boilerplate/
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
