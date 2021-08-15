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
    int count_zeros=0;
    while(factorial%10==0)
    {
      count_zeros++;
      factorial=factorial/10;
    }
    cout<<factorial<<endl<<count_zeros;
    return 0;
 }

 // it has space complexity issue because even for n=15, 
 // factorial will have 19 digits, which is not possible to store in
 // normal int data type.

