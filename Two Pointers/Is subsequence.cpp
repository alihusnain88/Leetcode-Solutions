// 392. Is subsequence
// Description:
// Given two strings s and t, 
// return true if s is a subsequence of t, 
// or false otherwise.

// Link:
// https://leetcode.com/problems/is-subsequence/

// Solution:
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();
        int i=0,j=0;
        int c=0;
        while(j<size2){
            if(t[j]==s[i]){
                t[c]=t[j];
                c++;
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        return (t.substr(0,c)==s);    
    }
};
