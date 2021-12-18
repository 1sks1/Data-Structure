//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1#

// Method 1. using set because set stores unique elements in sorted order.
// insert elements from both arrays and then return its size.
// Here unordered set could also be used if the order is not important. 
// Just replace set<int>s; to unordered_set<int>s;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        return s.size();
    }
};


// Method 2. using map because map stores unique keys only if it repeates then it overrides the value.
// insert elements from both arrays and then print the map.


#include <bits/stdc++.h>
using namespace std;
void printUnion(int* a, int n, int* b, int m)
{
     
    // Defining map container mp
    map<int, int> mp;
   
    // Inserting array elements in mp
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i });
   
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
    cout << "The union set of both arrays is :" << endl;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first
             << " "; // mp will contain only distinct
                     // elements from array a and b
}
 
// Driver Code
int main()
{
    int a[7] = { 1, 2, 5, 6, 2, 3, 5 };
    int b[9] = { 2, 4, 5, 6, 8, 9, 4, 6, 5 };
 
    printUnion(a, 7, b, 9);
}


