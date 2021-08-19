#include<bits/stdc++.h>
using namespace std;

bool check_prime(int num){
	if(num<=1)
		return false;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
			return false;
	}
	return true;
}

int find_prime_factors(int num)
{
	if(num<=1)
		return 0;
	for(int i=2;i<num;i++)
	{
		if(check_prime(i))
		{
			int x=i;
			while(num%x==0) //time complexity of complete program is O(n^2*log(n)).
			{
				cout<<i<<' ';
				x=x*i;

			}
		}
	}
	return 0;

}



int main()
{
	int num;
	cin>>num;
	find_prime_factors(num);
	return 0;
}
