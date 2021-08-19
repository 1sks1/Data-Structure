// Question:-
// Given two integers ‘a’ and ‘m’, find modular multiplicative inverse of ‘a’ under modulo ‘m’. If does not exist return -1.
// The modular multiplicative inverse is an integer ‘x’ such that. 

// Definition: 
// a x ≅ 1 (mod m)
// The value of x should be in { 1, 2, … m-1}, i.e., in the range of integer modulo m. 
// ( Note that x cannot be 0 as a*0 mod m will never be 1 )
// The multiplicative inverse of “a modulo m” exists if and only if a and m are relatively prime.
// (i.e., if gcd(a, m) = 1).

// Example:
// Input:
// a = 3
// m = 11
// Output: 4
// Explanation: Since (4*3) mod 11 = 1. 
// 4 is modulo inverse of 3. One might think,
// 15 also as a valid output as "(15*3)
// mod 11"  is also 1, but 15 is not in 
// ring {0, 1, 2, ... 10}, so not valid.

#include<bits/stdc++.h>
using namespace std;
int gcd(int num1,int num2)
{
	if(num2==0)
		return num1;
	return gcd(num2,num1%num2);
}
int modular_multiplicative_inverse(int a,int m)
{
	if(gcd(a,m)==1)
	{
		for(int i=1;i<m;i++)
		{
			if((a*i)%m==1)
				return i;
		}

	}
	
	return -1;
}
int main()
{
	int a,m;
	cin>>a>>m;
	cout<<modular_multiplicative_inverse(a,m);
	return 0;
}

// Here we used recursive approach to find gcd.
// time complexity is O(mlogn).
//space complexity is O(logn).