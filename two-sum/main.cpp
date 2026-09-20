#include <iostream>
#include "Solution.cpp"
#include <gtest/gtest.h>
#include <vector>
using namespace std;


int main(int argc, char **argv){
    Solution solution = new Solution();
    vector<int> inputVector = {1,2,3,4};

    vector<int> result = solution.two_sum(inputVector, 3);

    return 0;
}