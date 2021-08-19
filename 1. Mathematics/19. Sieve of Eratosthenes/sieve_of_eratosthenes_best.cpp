// Sieve of Eratosthenes is a method to find the prime numbers and composite numbers among the group of numbers.

#include<bits/stdc++.h>
using namespace std;
int sieve_of_eratosthenes(int num)
{
	if(num<=1)
		return 0;
	bool arr[num+1];
	for(int i=2;i<=num;i++)
		arr[i]=true;
	for(int i=2;i<=num;i++)
	{
		if(arr[i]==true)
		{
			cout<<i<<' ';
			for(int j=i*i;j<=num;j=j+i)
			{
				arr[j]=false;
			}
		}
	}
	return 0;

}
int main()
{
	int num;
	cin>>num;
	sieve_of_eratosthenes(num);
	return 0;
}
// time complexity is O(n*loglog(n))~= O(n)