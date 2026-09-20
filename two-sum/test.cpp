#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "solution.cpp"
using namespace std;

// TEST(SuiteName, TestName)
TEST(Solution, Two_Elements){
    Solution sol;
    vector<int> input = {3,2};
    vector<int> expected = {0,1};
    EXPECT_EQ(sol.twoSum(input, 5), expected);
} 

TEST(Solution, Two_Elements){
    Solution sol;
    vector<int> input = {3,2};
    vector<int> expected = {0,1};
    EXPECT_EQ(sol.twoSum(input, 5), expecteds);
} 