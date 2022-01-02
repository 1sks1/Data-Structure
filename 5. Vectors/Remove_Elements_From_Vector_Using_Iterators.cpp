class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
           vector<int>::iterator ptr=nums.begin();
           while(ptr<nums.end())
           {
               if(*ptr==val)
                {
                   nums.erase(ptr);
                   
                }
               else
                ptr++;
            }
        return nums.size();
    }
};
                 