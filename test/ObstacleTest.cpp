/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    ObstacleTest.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Defining the Test stubs for Obstacle class
 */

#include <gtest/gtest.h>
#include <memory>
#include <Obstacle.hpp>

std::shared_ptr<Obstacle> testObject3;

/**
 * @brief Check if the calculateVertices works
 */
TEST(Obstacle, calculateVerticesTest1) {
  testObject3 = std::make_shared<Obstacle>();
  testObject3->calculateVertices(5.0, 5.0, 1.0, 1.0);
  ASSERT_EQ(4, testObject3->x1);
}

/**
 * @brief Check if the calculateVertices works
 */
TEST(Obstacle, calculateVerticesTest2) {
testObject3 = std::make_shared<Obstacle>();
  testObject3->calculateVertices(5.0, 5.0, 1.0, 1.0);
  ASSERT_EQ(5, testObject3->x2);
}

/**
 * @brief Check if the calculateVertices works
 */
TEST(Obstacle, calculateVerticesTest3) {
  testObject3 = std::make_shared<Obstacle>();
  testObject3->calculateVertices(5.0, 5.0, 1.0, 1.0);
  ASSERT_EQ(4, testObject3->y1);
}

/**
 * @brief Check if the calculateVertices works
 */
TEST(Obstacle, calculateVerticesTest4) {
  testObject3 = std::make_shared<Obstacle>();
  testObject3->calculateVertices(5.0, 5.0, 1.0, 1.0);
  ASSERT_EQ(5, testObject3->y3);
}

/**
 * @brief Check if the createObstacleSpace works
 */
TEST(Obstacle, verifyObstacleTest) {
  testObject3 = std::make_shared<Obstacle>();
  testObject3->calculateVertices(5.0, 5.0, 1.0, 1.0);
  ASSERT_EQ(1, testObject3->verifyObstacle(10, 10));
}
