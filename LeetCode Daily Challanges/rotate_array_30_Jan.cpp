// 189. Rotate Array

//Simple approach

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k% nums.size();
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end()-k);       
        reverse(nums.begin(), nums.end());
    }
};

// Better Approach

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k = k % len;
        for(int i=0;i<len/2;i++)
        {
            swap(nums[i],nums[len-i-1]);
        }
        for(int i=0;i<k/2;i++)
        {
            swap(nums[i],nums[k-i-1]);
        }
        for(int i=0;i<(len-k)/2;i++)
        {
            swap(nums[k+i],nums[len-i-1]);
        }
    }
};