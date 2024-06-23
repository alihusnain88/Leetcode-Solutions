// 1346.  Check if N and its double exists
// Description:
// Check in an integer array that if two indices exist, such that:
// arr[i] is double of arr[j] and i<j

// Link:
// https://leetcode.com/problems/check-if-n-and-its-double-exist/

// Solution:
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int size = arr.size();
        for(int i=0; i<size-1; i++){
            for(int j=i+1; j<size; j++){
                if(arr[i]/2.0==arr[j] || arr[j]/2.0==arr[i]){
                    return true;
                }
            }
        }
        return false;     
    }
};
