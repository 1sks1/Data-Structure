
//  Question No : 1291

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> ans;
        int num;
        for(int i=1;i<9;i++)
        {
            num = i;
            for(int j = i+1;j<=9;j++)
            {
                num = num*10+j;
                if(num<=high && num>=low)
                {
                    ans.push_back(num);
                }
                else if(num>high)
                    break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
   
};