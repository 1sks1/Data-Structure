<<<<<<< HEAD
class Solution {
    
public:
    
    int searchInsert(vector<int>& nums, int target) {
        
        int i=0;
        
        for(i=0;i<nums.size();i++)
            
        {
            
            if((nums[i]==target)||(target<nums[i]))
                
                return i;
        }
        
        return nums.size();
        
    }
    
=======
class Solution {
    
public:
    
    int searchInsert(vector<int>& nums, int target) {
        
        int i=0;
        
        for(i=0;i<nums.size();i++)
            
        {
            
            if((nums[i]==target)||(target<nums[i]))
                
                return i;
        }
        
        return nums.size();
        
    }
    
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
};