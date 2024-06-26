// 35.  Search insert position
// Description:
// Given a sorted array of distinct integers 
// and a target value, return the index if 
// the target is found. If not, return the 
// index where it would be if it were inserted in order.

// Link: 
// https://leetcode.com/problems/search-insert-position/description/

// Solution:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int i;
        for(i=0; i<size; i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){
                break;
            }
        }
        return i;        
    }
};
