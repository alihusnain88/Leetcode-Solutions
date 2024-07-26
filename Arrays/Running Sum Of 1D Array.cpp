// 1480.  Running sum of 1d array
// Descritpion:
// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

// Link:
// https://leetcode.com/problems/running-sum-of-1d-array/

// Solution:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;            
    }
};
