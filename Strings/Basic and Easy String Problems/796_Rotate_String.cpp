//Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

//A shift on s consists of moving the leftmost character of s to the rightmost position.

//For example, if s = "abcde", then it will be "bcdea" after one shift.

//Leetcode Problem 796

class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size())
            return false;

        string a;

        a = s + s;

        int x = a.find(goal,1);

        if(x == -1){
            return false;
        }
        else{
            return true;
        }
        
    }
};
