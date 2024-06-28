// 1.  Two Sum
// Description:
// An integer array and a target is given, 
// return the indices of two numbers whose 
// sum is equal to the target.

// Link:
// https://leetcode.com/problems/two-sum/

// Solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int>result(2);
        int i, j;
        for(i=0; i<size; i++){
            for(j=i+1; j<size; j++){
                if(nums[i]+nums[j] == target){
                    result[0]=i;
                    result[1]=j;
                    break;
                }
            }
        }
        return result;        
    }
};
