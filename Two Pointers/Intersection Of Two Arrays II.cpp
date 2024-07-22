// 350.  Intersection Of Two Arrays II
// Description:
// Given two integer arrays, return an array of their intersection. 
// Each element in the result must appear as many times as it shows 
// in both arrays and you may return the result in any order.

// Link:
// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

// Solution:
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i=0,j=0;
        while(i<size1 && j<size2){
            if(nums1[i]==nums2[j]){
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
        }
        return result;
    }
};
