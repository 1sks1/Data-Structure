#include<bits/stdc++.h>
using namespace std;
int find_divisors(int num)
{
	if(num<=1)
		return 0;
	for(int i=1;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
			
		}
	}
	for(int i=sqrt(num);i>=1;i--)
	{
		if(num%i==0)
		{
			if(i!=num/i)
				cout<<num/i<<' ';
			
		}
	}

	return 0;
}


int main()
{
	int num;
	cin>>num;
	find_divisors(num);
	return 0;
}

// time complexity is O(n^2);
// auxilary space is O(1);