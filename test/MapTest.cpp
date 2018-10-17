/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    MapTest.cpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/09/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 7, Mid-term
 *
 *  @section DESCRIPTION
 *
 *  Defining the Test stubs for Map class
 */

#include "gmock/gmock.h"
#include <gtest/gtest.h>
#include <memory>
#include <Map.hpp>

using ::testing::Return;
using ::testing::AtLeast;

std::shared_ptr<Map> testObject2;

class Obstacle {
  virtual ~Obstacle();
  virtual bool verifyObstacle(const int length, const int width) = 0;
  virtual void createObstacleSpace(double robotL, double robotW, int length,
                                   int width) = 0;
  virtual void calculateVertices(double centerX, double centerY, double length,
                                 double width) = 0;
};

class MockObstacle : public Obstacle {
  MOCK_METHOD2(verifyObstacle, bool(const int length, const int width));
  MOCK_METHOD4(createObstacleSpace, void(double robotL, double robotW, int length,
          int width));
  MOCK_METHOD4(calculateVertices, void(double centerX, double centerY, double length,
          double width));
};

TEST(Map, createMapTest) {
  MockObstacle O;
  //EXPECT_CALL(O, verifyObstacle(1,1)).WillOnce(Return(true));
  EXPECT_CALL(O, calculateVertices(5.0,5.0,1.0,1.0)).Times(AtLeast(2));
  testObject2 = std::make_shared<Map>();
  EXPECT_TRUE(testObject2->createMap(10, 10, 'Y'));
}

/**
 * @brief Check if the length of map is less than zero
 */
TEST(Map, lengthTest) {
  testObject2 = std::make_shared<Map>();
  ASSERT_LE(0, testObject2->length);
}

/**
 * @brief Check if the width of the map is less than zero
 */
TEST(Map, widthTest) {
  testObject2 = std::make_shared<Map>();
  ASSERT_LE(0, testObject2->width);
}

/**
 * @brief Verify the changeRobotDimension of the map
 */
TEST(Map, changeRobotDimensionTest1) {
  testObject2 = std::make_shared<Map>();
  testObject2->changeRobotDimension(1.0, 1.0);
  ASSERT_EQ(1.0, testObject2->robotL);
}

/**
 * @brief Verify the changeRobotDimension of the map
 */
TEST(Map, changeRobotDimensionTest2) {
  testObject2 = std::make_shared<Map>();
  testObject2->changeRobotDimension(1.0, 1.0);
  ASSERT_EQ(1.0, testObject2->robotW);
}
