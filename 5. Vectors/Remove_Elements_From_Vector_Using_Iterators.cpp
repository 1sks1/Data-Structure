<<<<<<< HEAD
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
=======
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
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
                 