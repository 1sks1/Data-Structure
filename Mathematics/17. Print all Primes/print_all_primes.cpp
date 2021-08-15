#include<bits/stdc++.h>
using namespace std;
bool check_prime(int num)
{
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
			return false;
	}

	return true;
}
int print_prime(int num)
{
	if(num<=1)
		return 0;
	for(int i=2;i<=num;i++)
	{
		if(check_prime(i))
			cout<<i<<' ';
	}
	return 0;

}

int main()
{
	int num;
	cin>>num;
	print_prime(num);
	return 0;
}

//time complexity is O(n*sqrt(n));