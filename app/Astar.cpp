/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Astar.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Defining methods of Astar class
 */

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <Map.hpp>
#include <Astar.hpp>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::pair;
using std::make_pair;

Astar::Astar() {
  // Initializing values to the attributes of Astar class
  startNode.first = -1;
  startNode.second = -1;
  endNode.first = -1;
  endNode.second = -1;
}

Astar::~Astar() {
  // Destructor stub
}

void Astar::runAstar() {
  // ToDo Define the cost function and heuristic function
  // ToDo Write a code for A* algorithm to find trajectory
  // ToDo Show the output

  // Create a map
  int l = 0, w = 0;
  // Ask user for length and width of Map
  cout << "Enter the length and width of map: ";
  cin >> l >> w;
  createMap(l, w);
  bool verify = false;
  while (verify == false) {
    // Ask user to enter the start node
    cout << "Enter the x and y coordinates of start node: ";
    cin >> startNode.first >> startNode.second;
    // Ask user to enter the end node
    cout << "Enter the x and y coordinates of end node: ";
    cin >> endNode.first >> endNode.second;
    // Verify the start and end nodes
    verify = verifyNodes();
  }
  double cost = 0.0;
  path.push_back(startNode);
  pair<int, int> newNode;
  pair<int, int> currentNode = startNode;
  bool search = false;
  while (search == false) {
    if (currentNode == endNode) {
      search = true;
    } else {
      // Move the robot in 8 connected space
      int i = 0;
      while (i < 8) {
        // Decide which action to take
        newNode = action(i, currentNode);
        // Verify if new node is within the map boundaries
        if (newNode.first >= 0 && newNode.second >= 0) {
          if (newNode.first <= w && newNode.second <= l) {
            // Verify if new node is not inside the obstacle space or visited before
            if (visitedNodes[newNode] == 0) {
              // Add the new node to the visited nodes
              visitedNodes[newNode] = 1;
              if (i % 2 == 0) {
                cost += sqrt(2);
            } else {
                cost += 1;
              }
              double dist = pow(newNode.first - endNode.first, 2)
                  + pow(newNode.second - endNode.second, 2);
              // Calculate the cost of the new node
              cost += currentCost[currentNode] + sqrt(dist);
              // Assign cost of the new node
              currentCost[newNode] = cost;
              // Add the cost and new node to the queue
              queue.push_back(make_pair(cost, newNode));
              // Add the parent of new node
              parentNode[newNode] = currentNode;
              // Check if goal is reached
              if (newNode.first == endNode.first
                  && newNode.second == endNode.second) {
                search = true;
                cout << "The search has been completed." << endl;
              }
            }
          }
        }
        i++;
      }
      // Sort the queue to find the node with minimum cost
      sort(queue.begin(), queue.end());
      // Use the minimum cost node to expand next
      currentNode = queue[0].second;
      // Remove the minimum cost node after saved as current node
      queue.erase(queue.begin());
    }
  }
  if (search == true) {
    // Find the optimal path
    search = false;
    pair<int, int> parent = parentNode[endNode];
    while (search == false) {
      path.push_back(parentNode[parent]);
    }
    showMap(startNode, endNode, path);
  } else {
    cout << "The search could not find an optimal path." << endl;
  }
}

bool Astar::verifyNodes() {
  // Return a bool after verifying the start and end nodes
  bool verify = false;
  // Start and end node should lie within the map boundaries
  if (startNode.first >= 0 && startNode.second >= 0) {
    if (startNode.first <= width && startNode.second <= length) {
      if (endNode.first >= 0 && endNode.second >= 0) {
        if (endNode.first <= width && endNode.second <= length) {
          // Start and end nodes should not lie inside the obstacle space
          if (obstacleSpace[startNode] == 0 && obstacleSpace[endNode] == 0)
          verify = true;
        } else {
          cout << "Start or end node lies inside the obstacle space." << endl;
        }
      } else {
        cout << "Start or end node lies outside the map boundaries." << endl;
      }
    }
  }
  if (verify == false) {
    cout << "Wrong nodes entered." << endl;
    cout << "Please re-enter the start node and end node." << endl;
  }
  return verify;
}

pair<int, int> Astar::action(int i, pair<int, int> currentNode) {
  pair<int, int> newNode;
  switch (i) {
    case 0:
      newNode = make_pair(currentNode.first + 1, currentNode.second);
      break;
    case 1:
      newNode = make_pair(currentNode.first + 1, currentNode.second + 1);
      break;
    case 2:
      newNode = make_pair(currentNode.first, currentNode.second + 1);
      break;
    case 3:
      newNode = make_pair(currentNode.first - 1, currentNode.second + 1);
      break;
    case 4:
      newNode = make_pair(currentNode.first - 1, currentNode.second);
      break;
    case 5:
      newNode = make_pair(currentNode.first - 1, currentNode.second - 1);
      break;
    case 6:
      newNode = make_pair(currentNode.first, currentNode.second - 1);
      break;
    case 7:
      newNode = make_pair(currentNode.first + 1, currentNode.second - 1);
      break;
  }
  
  return newNode;
}
