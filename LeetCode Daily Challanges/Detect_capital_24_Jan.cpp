// leetcode 520. Detect capital
// Time Complexity:O(n) and Aux Space: O(1)

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n= word.length();
        int u =0,l = 0;
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
                u++;
            else
                l++;
        }
        if((u==n)||(l==n)||(u==1 && isupper(word[0])))
            return true;
        return false;
    }
};