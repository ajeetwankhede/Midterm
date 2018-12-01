/**
 *  @copyright MIT License 2018 Ajeet Wankhede
 *  @file    Astar.hpp
 *  @author  Ajeet Wankhede (driver) and Likhita Madiraju (navigator)
 *  @date    10/29/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Testing with Google Mock
 *
 *  @section DESCRIPTION
 *
 *  MockOutput class declaration
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <vector>
#include <utility>
#include <Astar.hpp>

using std::string;
using std::pair;
using std::make_pair;
using std::vector;

/**
 * @brief Class declaration for MockOutput
 */
class MockOutput : public Output {
 public:
  MockOutput()
      : Output() {
  }
  MOCK_METHOD1(showOutput, void(int));
};

/**
 * @brief Verify saveOutput method
 */
TEST(Astar, saveOutputTest) {
  MockOutput output;
  Astar astar;
  vector < pair<int, int> > path;
  path.push_back(make_pair(1, 1));
  EXPECT_CALL(output, showOutput(1)).Times(1);
  astar.saveOutput(output);
  EXPECT_TRUE(astar.save);
}
