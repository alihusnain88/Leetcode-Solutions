// 349.  Intersection of two arrays
// Description:
// Given two integer arrays, return an array of their intersection.
// Each element in the result must be unique and you may return the result in any order.

// Link: 
// https://leetcode.com/problems/intersection-of-two-arrays/

// Solution:
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> result;

        int i=0,j;
        while(i<size1){
            for(j=0; j<size2; j++){
                if(nums1[i]==nums2[j]){
                    result.push_back(nums1[i]);
                }
            }
            i++;
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()),result.end());
        return result;   
    }
};
