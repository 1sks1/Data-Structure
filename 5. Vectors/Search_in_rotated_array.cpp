<<<<<<< HEAD
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
=======
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
};