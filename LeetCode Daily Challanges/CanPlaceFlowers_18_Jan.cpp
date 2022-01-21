
class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int count =0;  // keeps track of possible places
        int len = f.size(); // size of flower bed

        if(len == 1)        // checking when there is only one space
        {
            if(f[0] == 0)
                return n<=1;
            else
                return n<=0;
        }

        // handaling space at first position 
        if(f[0] ==0 && f[1] == 0)  
        {
            count++;
            f[0] = 1;
        }

        // traverse through the bed and update ith position when o o o condition is found and increment count.
        for(int i=2;i<len-1;i++)
        {
            if(f[i] == 0 && f[i+1] == 0 && f[i-1] == 0)
            {
                count ++;
                f[i] = 1;
                i++;
            }
            
        }

        // handaling space at last position
        if(f[len-1] == 0 && f[len-2] == 0)
            count++;
        
        // Comapare if plant holding capacity is greater that or equal to n or not.
        return count>=n ;
    }
};