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

#include <gtest/gtest.h>
#include <memory>
#include <Map.hpp>

std::shared_ptr<Map> testObject2;

/**
 * @brief Check if the length of map is less than zero
 */
TEST(Map, lengthTest) {
  testObject2 = std::make_shared<Map>();
  ASSERT_LT(0.0, testObject2->length);
}

/**
 * @brief Check if the width of the map is less than zero
 */
TEST(Map, widthTest) {
  testObject2 = std::make_shared<Map>();
  ASSERT_LT(0.0, testObject2->width);
}
