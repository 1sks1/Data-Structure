#include<bits/stdc++.h>
using namespace std;
const int M= pow(10,9)+7;
long long mul_under_modulo(unsigned long long num1, unsigned long long num2)
{
	return ((num1%M)*(num2%M)) % M;
}
int main()
{
	unsigned long long num1, num2;
	cin>>num1>>num2;
	cout<<mul_under_modulo(num1,num2);
	return 0;
}