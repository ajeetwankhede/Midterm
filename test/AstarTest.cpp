/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    AstarTest.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Defining the Test stubs for Astar class
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>
#include <utility>
#include <memory>
#include <Astar.hpp>

using std::string;
using std::pair;
using std::make_pair;
using std::vector;

std::shared_ptr<Astar> testObject1;

/**
 * @brief Verify runAstar method
 */
TEST(Astar, runAstarTest) {
  testObject1 = std::make_shared<Astar>();
  ASSERT_LE(0, testObject1->startNode.first);
}

/**
 * @brief Check if the start node is less than zero
 */
TEST(Astar, startNodeTest) {
  testObject1 = std::make_shared<Astar>();
  ASSERT_LE(0, testObject1->startNode.first);
}

/**
 * @brief Check if the end node is less than zero
 */
TEST(Astar, endNodeTest) {
  testObject1 = std::make_shared<Astar>();
  ASSERT_LE(0, testObject1->endNode.first);
}

/**
 * @brief Check if verifyNodes work
 */
TEST(Astar, verifyNodesTest1) {
  testObject1 = std::make_shared<Astar>();
  testObject1->startNode = std::make_pair(1, 1);
  testObject1->endNode = std::make_pair(9, 9);
  testObject1->length = 10;
  testObject1->width = 10;
  ASSERT_EQ(1, testObject1->verifyNodes());
}

/**
 * @brief Check if verifyNodes work
 */
TEST(Astar, verifyNodesTest2) {
  testObject1 = std::make_shared<Astar>();
  testObject1->startNode = std::make_pair(1, 1);
  testObject1->endNode = std::make_pair(9, 9);
  testObject1->length = 10;
  testObject1->width = 10;
  testObject1->obstacleSpace[testObject1->startNode] = 1;
  ASSERT_EQ(0, testObject1->verifyNodes());
}

/**
 * @brief Check if verifyNodes work
 */
TEST(Astar, verifyNodesTest3) {
  testObject1 = std::make_shared<Astar>();
  testObject1->startNode = std::make_pair(1, 1);
  testObject1->endNode = std::make_pair(9, 9);
  testObject1->length = 10;
  testObject1->width = 10;
  testObject1->obstacleSpace[testObject1->endNode] = 1;
  ASSERT_EQ(0, testObject1->verifyNodes());
}
