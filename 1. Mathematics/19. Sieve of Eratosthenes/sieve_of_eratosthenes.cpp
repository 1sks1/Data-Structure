#include<bits/stdc++.h>
using namespace std;
int sieve_of_eratosthenes(int num)
{
	if(num<=1)
		return 0;
	bool arr[num+1];
	for(int i=2;i<=num;i++)
		arr[i]=true;
	for(int i=2;i*i<=num;i++)// imp concept that we traverse only till sqrt(num) because number greater than sqrt(num) would have already been marked by smaller numbers.
		// divisors always appear in pair to smaller divisor is always less than or equal to square root of than number.
	{
		if(arr[i]==true)
		{
			for(int j=2*i;j<=num;j=j+i)
			{
				arr[j]=false;
			}
		}
	}
	for(int i=2;i<=num;i++)
	{
		if(arr[i]==true)
			cout<<i<<' ';
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