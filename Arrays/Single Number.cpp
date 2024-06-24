// 136.  Single Number 
// Description:
// Every element of array appears twice, except one. Find that element that occurs once.

// Link:
// https://leetcode.com/problems/single-number/

// Solution:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int i;
       
        for(i=1; i<size; i=i+2){
            if(nums[i]!=nums[i-1] ){
                return nums[i-1];
            }
        }        
        return nums[size-1];
    }
};
