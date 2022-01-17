class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int area_max_global=0;
        int i=0,j=height.size()-1;
        
        for(i;i<j;)
        {
            int area;
            if(height[i]>height[j])
            {
                area= (j-i)*height[j];
                j--;
            }
            else
            {
                area=(j-i)*height[i];
                i++;
            }
            if(area>area_max_global)
                area_max_global=area;
            
            
        }
        
        return area_max_global;
    }
};_