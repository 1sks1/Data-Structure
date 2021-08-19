// democratic prime is a number whose left part is prime and prime part is not prime.
// exp: 31566, 1124 is democratic prime but 512 is not democratic prime because 5 is prime but 2 is also prime.



#include<bits/stdc++.h>
using namespace std;
bool check_prime(int num){
	if(num<=1)
		return false;
	if(num==2||num==3)
		return true;
	if(num%2==0||num%3==0)
		return false;
	for(int i=5;i<=sqrt(num);i+=6)
	{
		if((num%i==0)||(num%(i+2)==0))
			return false;
	}
	return true;
}
string democratic_prime(int num)
{
	int num_copy=num;
	int length=0;
	while(num_copy>0)
	{
		length++;
		num_copy=num_copy/10;
	}

	for(int i=1;i<=length/2;i++)
	{
		int divisor1=pow(10,length-i);
		int divisor2=pow(10,i);
		if(check_prime(num/divisor1)&&(!check_prime(num%divisor2)))
		{
			return "democratic prime";
		}

	}
	return "not democratic prime";
}
int main()
{
	int num;
	cin>>num;
	cout<<democratic_prime(num);
	return 0;
}