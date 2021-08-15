#include<bits/stdc++.h>
using namespace std;
bool check_prime(int num)
{
	if(num<=1)
		return false;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
			return false;
	}
	return true;
}
int find_factors(int num)
{
	if(num<=1)
		return 0;
	while(num%2==0)
	{
		cout<<"2 ";
		num=num/2;
		continue;
	}
	while(num%3==0)
	{
		cout<<"3 ";
		num=num/3;
		continue;
	}
	for(int i=5;i<=sqrt(num);i+=6)
	{
		if(num%i==0)
		{
			cout<<i<<' ';
			num=num/i;
		}
		else if(num%(i+2)==0)
		{
			cout<<(i+2)<<' ';
			num=num/(i+2);
		}
	}

	if(num>3)
		cout<<num;
	return 0;
}
int main(){
	int num;
	cin>>num;
	find_factors(num);
	return 0;
}