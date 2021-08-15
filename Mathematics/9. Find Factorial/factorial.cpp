/*
Given T test cases and in each test
case a number N. Print its factorial
for each test case % M
where M= 10^9+7.

COnstraints:
1<=T<=10^5
1<=N<=10^5
*/
#include<iostream>
#include<math.h>
using namespace std;
const int M=pow(10,9)+7;
long long factorial(int num)
{
	long long fact = 1;
	for(int i=2;i<=num;i++)
	{
		fact=(fact*i)%M;
	}
	return fact;
}
int main()
{
	int num;
	cin>>num;
	cout<<factorial(num);
	return 0;
}