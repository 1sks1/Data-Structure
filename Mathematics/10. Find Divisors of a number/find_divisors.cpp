#include<bits/stdc++.h>
using namespace std;
int find_divisors(int num)
{
	if(num<=1)
		return 0;
	for(int i=2;i<=num;i++)
	{
		if(num%i==0)
			cout<<i<<' ';
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

// time complexity is O(n);
// auxilary space is O(1);