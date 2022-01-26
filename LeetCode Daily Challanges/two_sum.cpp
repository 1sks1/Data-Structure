// 1. Two Sum
/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.
You can return the answer in any order.

*/


// Brute force approach
// Time Complexity : O(n^2)
// Aux Space : O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i< nums.size()-1;i++)
        {
            for(int j =i+1; j<nums.size();j++)
                if( nums[i]+nums[j] == target)
                    return {i,j};
        }
        return {0,0};
    }
};

// Efficient Approach
// Time Complexity : O(N);
// Aux space : O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i< nums.size();i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp[target - nums[i]] = i;
            }
            else
            {
                return {mp[nums[i]],i};
            }
        }
        return {0,0};
    }
};
