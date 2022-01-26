// 796. Rotate String
/*

Given two strings s and goal, return true 
if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.

*/

// Time Complexity is O(n)
// Aux Space : O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;

        int sz =  s.length();

        if(sz == 0)
            return true;
        //  the relative position of character
        int diff = INT_MIN;  

        vector<int> pos;    // vector to store relative positions incase of duplicate values.

        // loop to find relative positions of goal[0] character in s.
        for(int i=0;i<sz;i++)
        {
            if(goal[0] == s[i])
            {
                diff = 0-i;
                if(diff<0)
                    diff += sz;
                pos.push_back(diff);
            }
        }

        // incase goal[0] is not present in s.
        if(diff == INT_MIN)  
            return false;

        // this loop checks for all the possible values of diff
        bool ans;
        for(int j=0;j<pos.size();j++)
        {
            ans = true;
            diff = pos[j];
            int index ;
            
            // this loop checks if relative positive of characters in s is same as goal or not
            // using index difference as diff[j].

            for(int i =1 ;i<sz ;i++)
            {
                index = (i - diff);
                if(index < 0)
                    index += sz;
                if(s[index] != goal[i])
                {
                	// if the character does not match then ans = false and check for other diffs.
                    ans = false;  
                    break;
                }
            }
            // ans == true means, for diff[j], the relative position's character are same in s and goal
            // hence return true;
            if(ans == true)
                    return true;
        }
        
        // this will only run when for all possible value of diff's, order is not same.
        return false;
    }
};