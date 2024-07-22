// 1528.  Shuffle String
// Description:
// A string and an integer array of the same length is given. 
// Shuffle the string such that the character at the ith position 
// moves to indices[i] in the shuffled string.

// Link:
// https://leetcode.com/problems/shuffle-string/

// Solution:
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int size = indices.size();
        
        string answer(size, ' ');
        for(int i=0; i<size; i++){
            answer[indices[i]] = s[i];
        }
        return answer;        
    }
};
