#include<bits/stdc++.h>
using namespace std;
int factorial(int num)
{
	if(num==0)
		return 1;
	return num*factorial(num-1);
}
 int main(){
 	int num;
 	cin>>num;
 	cout<<factorial(num);
 	return 0;

 }

 // time complexity is theta of N, where N is size of num.


 // auxillary space is not constant, it is O(n), 
 //because it has to store all the recursive value from N to 0;