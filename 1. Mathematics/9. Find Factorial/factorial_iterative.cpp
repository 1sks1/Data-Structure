#include<bits/stdc++.h>
using namespace std;
 int main(){
    int num;
    cin>>num;
    int factorial=1;
    for(int i=2;i<=num;i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
    return 0;
 }


 // time complexity is theta of N, where N is size of num.


 // auxillary space is not constant, it is O(1), 
 //because it uses conatant space.