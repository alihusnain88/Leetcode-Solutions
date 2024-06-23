// 74.  Search a 2D matrix
// Description:
// Search for a target element in a sorted integer matrix.

// Link:
// https://leetcode.com/problems/search-a-2d-matrix/

// Solution:
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
       
        for(int i=0; i<rows; i++){
            if(matrix[i][cols-1]==target){
                return matrix[i][cols-1];
            } //if condition ends           
            else if(matrix[i][cols-1]>target){
                for(int k=0; k<cols; k++){
                    if(matrix[i][k]==target){
                        return true;
                    } //if condition ends
                } // lower for loop ends
            } //else if condition ends
        } //upper for loop ends
         return false;        
    }
};
