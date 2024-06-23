// 1089.  Duplicate Zeros
// Description:
// Duplicate each occurrence of zero in a given integer array, shifting the remaining elements to the right.

// Link:
// https://leetcode.com/problems/duplicate-zeros/description/

// Solution:
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size = arr.size();
        for(int i=0; i<size; i++){
            if(arr[i]==0){
                for(int j=size-1; j>i; j--){
                    arr[j]=arr[j-1];
                }
                 i++;
            }
        }        
    }
};



