<<<<<<< HEAD
// Array andn Hashtable
// Time Complexity O(n)
// Aux Space O(n)

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count =0;
        for(int i=0;i<time.size();i++)
        {
            time[i]=time[i]%60;
        }
        unordered_map<int,int> mp;
        for(int i=0;i<time.size();i++)
        {
            if(mp.find((60-time[i])%60)!=mp.end())
            {
                count += mp[(60-time[i])%60];
                
            }
            if(mp.find(time[i])==mp.end())
            {
                mp[time[i]]=1;
            }
            else
                mp[time[i]]++;
        }
        return count;
    }
=======
// Array andn Hashtable
// Time Complexity O(n)
// Aux Space O(n)

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count =0;
        for(int i=0;i<time.size();i++)
        {
            time[i]=time[i]%60;
        }
        unordered_map<int,int> mp;
        for(int i=0;i<time.size();i++)
        {
            if(mp.find((60-time[i])%60)!=mp.end())
            {
                count += mp[(60-time[i])%60];
                
            }
            if(mp.find(time[i])==mp.end())
            {
                mp[time[i]]=1;
            }
            else
                mp[time[i]]++;
        }
        return count;
    }
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
};