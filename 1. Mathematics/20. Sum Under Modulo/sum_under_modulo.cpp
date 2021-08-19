#include<bits/stdc++.h>
const int M= pow(10,9)+7;
using namespace std;
int sum_under_modulo(unsigned long long num1, unsigned long long num2)
{
	return (num1+num2)%M;
}
int main()
{
	unsigned long long num1, num2;
	cin>>num1>>num2;
	cout<<sum_under_modulo(num1,num2);
	return 0;
}