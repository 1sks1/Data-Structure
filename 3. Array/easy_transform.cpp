// Ques:
// Given an array of size n
// you can perform operation on the array and drop/remove
// an element from it.
// Find minimumi operation to be performed such that sum of all the adjusant
// numbers is even

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count_even = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2 ==0 )
            count_even++;
    }
    int count_odd = n-count_even;
    cout<<min(count_even,count_odd)<<endl;
    return 0;
}