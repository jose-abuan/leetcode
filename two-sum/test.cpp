#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <string>
#include "solution.cpp"
using namespace std;

// We make the assumption based on leetcode that each one input would only have one solution

// Longest Common Prefix
TEST(Solution, LCPCaseOne){
    Solution sol;
    vector<string> inputs = {"flower", "flow", "flight"};
    EXPECT_EQ(sol.longestCommonPrefix(inputs), "fl");
}





// TEST(SuiteName, TestName)
TEST(Solution, Two_Elements){
    Solution sol;
    vector<int> input = {3,2};
    vector<int> expected = {0,1};
    EXPECT_EQ(sol.twoSum(input, 5), expected);
} 

TEST(Solution, Three_elements){
    Solution sol;
    vector<int> input = {3,2,6,4};
    vector<int> expected = {0,1};
    EXPECT_EQ(sol.twoSum(input, 5), expected);
} 

TEST(Solution, Leetcode_public_1){
    Solution sol;
    vector<int> input = {2,7,11,15};
    vector<int> expected = {0,2};
    EXPECT_EQ(sol.twoSum(input, 13), expected);
}


TEST(Solution, Leetcode_public_2){
    Solution sol;
    vector<int> input = {3,2,4};
    vector<int> expected = {1,2};
    EXPECT_EQ(sol.twoSum(input, 6), expected);
}

// Palindrome Tests
TEST(Solution, Is121Palindrome){
    Solution sol;
    EXPECT_EQ(sol.isPalindrome(121), true);
}

TEST(Solution, IsNegativePalindrome){
    Solution sol;
    EXPECT_EQ(sol.isPalindrome(-121), false);
}

TEST(Solution, GeneralFalsePalindromeCase){
    Solution sol;
    EXPECT_EQ(sol.isPalindrome(109121283), false);
}

TEST(Solution, RepDigitPalindrome){
    Solution sol;
    EXPECT_EQ(sol.isPalindrome(333333333), true);
}

TEST(Solution, Is10Palindrome){
    Solution sol;
    EXPECT_EQ(sol.isPalindrome(10), false);
}

TEST(Solution, OddPalindrome){
    Solution sol;
    EXPECT_EQ(sol.isPalindrome(12321), true);
}

TEST(Solution, PalindromeLeetcodeFailingTestCase){
    Solution sol;
    EXPECT_EQ(sol.isPalindrome(1000021), false);
}


// Roman to int tests
TEST(Solution, caseOne){
    Solution sol;
    string s = "III";
    EXPECT_EQ(sol.romanToInt(s), 3);
}

TEST(Solution, caseTwo){
    Solution sol;
    string s = "LVIII";
    EXPECT_EQ(sol.romanToInt(s), 58);
}

TEST(Solution, caseThree){
    Solution sol;
    string s = "MCMXCIV";
    EXPECT_EQ(sol.romanToInt(s), 1994);
    
}



