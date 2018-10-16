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
#include <memory>
#include <Astar.hpp>

std::shared_ptr<Astar> testObject1;

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
