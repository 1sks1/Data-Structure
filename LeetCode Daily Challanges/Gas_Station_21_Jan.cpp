// 134. Gas Station problem

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0,prev = 0, start = -1;
        
        // keeps extra fuel in a vector and finds the first possible starting point
        for(int i=0;i<cost.size();i++)
        {
            cost[i] = gas[i]-cost[i];
            // counts total sum
            sum += cost[i];
            if(start == -1 && cost[i] >= 0)
            {
                start = i;
            }
        }
        if(sum<0)
            return -1;
        
        // i starts from first possible fuel station till the last fuel station
        for(int i=start; i<cost.size() ;i++)
        {
            // if starting point is unknown and current station has surplus fuel the set start = i;
            if(start == -1 && cost[i] >= 0)
            {
                start = i;
                prev = cost[i];
            }
            else if(prev+cost[i] < 0)   // else if start is set but prev + cost[i] becomes -ve then we reset the start = -1
            {
                start = -1;
                prev = 0;                
            }
            else  // if prev + cost[i] is not negative means the travel is possible then we continue by updating prev
            {
                prev += cost[i];
            }
        }
        // we return the starting node
        return start;
    }
};