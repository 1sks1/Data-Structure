#include<iostream>
#include<math.h>
using namespace std;
const int M=pow(10,9)+7;
int count_digits(int num)  // best way to count digits because
						   // 10^(n-1)<=num <10^n+1
{
	int count = log10(num)+1;
	// int count=0;
	// while(num>0)
	// {
	// 	count++;
	// 	num=num/10;
	// }
	return count;
}
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
	int fact= factorial(num);
	cout<<count_digits(fact);
	return 0;
}