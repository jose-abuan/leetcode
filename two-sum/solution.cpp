#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){ 
        vector<int> solution;
        for(unsigned int i = 0; i < nums.size() - 1;i++){
            for(unsigned int j = i + 1; j < nums.size(); j++){
                if(nums.at(i) + nums.at(j) == target){
                    solution = {i, j};  
                    return solution;
                }
            }
        }
        return solution;
    }

    bool isPalindrome(int x){
        if(x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        
        // Take how many 10s are in this number
        long long divisor = 1;
        while(x / divisor >= 10){
            divisor *= 10;
        }

        // Loop through the numbers comparing the left and right digit
        // When you hit the last digit(s), if it's on it's own return true, else keep compare
        while(x > 0){
            int left_digit = x / divisor;
            int right_digit = x % 10;

            if(left_digit != right_digit){
                return false;
            }
            // strip the 2 digits from the number
            x = (x % divisor) / 10;
            
            // shrink the divisor since we took 2 numbers away
            divisor /= 100;
        }
        return true;
    }
    
    int romanToInt(string s){
        int sum = 0;
        int prevValue = 0;
        unordered_map<char, int> romanToIntMap = {
            {'I',1}, {'V',5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        for(char c: s){
            int currValue = romanToIntMap[c];
            sum += (currValue > prevValue) ? (currValue - 2*prevValue) : currValue;           
            prevValue = currValue;
        }
        return sum;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string longest_common =  
        for (string each : strs){

        }
        return "";   
    }

};


