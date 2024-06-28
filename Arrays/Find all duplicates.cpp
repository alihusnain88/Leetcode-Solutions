// 442.  Find All Duplicates In The Array
// Description:
// An array of n integers is given in which each element occurs once or twice.
// Return an array of all the integers that appear twice in the array.

// Link:
// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

// Solution:
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> result;
       vector<int> frequency(size+1);

       for(int i=0; i<size; i++){
        frequency[nums[i]]++;
       }
       for(int i=0; i<size+1; i++){
        if(frequency[i]>1){
            result.push_back(i);
        }
       }
       return result;        
    }
};
