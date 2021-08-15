// approach is based in formula [ gcd*lcm = num1*num2 ]

#include<bits/stdc++.h>
using namespace std;

// finding gcd first
int gcd(int num1,int num2)
{
	if(num2==0)
		return num1;
	return gcd(num2,num1%num2);
}
int main(){
	int num1,num2;
	cin>>num1>>num2;
	int lcm=(num1*num2)/gcd(num1,num2);
	cout<<lcm;
	return 0;
}

// time complexity is O(log(min(num1,num2))).
// auxalliary space is O(log(min(num1,num2))).