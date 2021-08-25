// If a number is purely power of two then it will have 
// only one set bit element.
// exp: 4= 000...00100
// 8= 000....001000

// Better solution is to check if there is only one set bit using 
// using Brian Karingham approach, n & (n-1) except for n=1.

#include<bits/stdc++.h>
using namespace std;
bool isPow2(int num)
{
	if(num>1)
	{
		return !(num & (num-1));
	}
	return 0;
}
int main()
{
	int num;
	cin>>num;
	cout<<isPow2(num);
	return 0;
}

// time complexity is constant O(1).