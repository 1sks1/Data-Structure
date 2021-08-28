#include<bits/stdc++.h>
using namespace std;

// first approach
int total_set_bit(int num)
{
	int k=1;
	int count=0;
	for(int i=0;i<32;i++)
	{
		if((num&k)!=0)
			count++;
		k=k<<1;

	}
	return count;
}

// second approach
int total_set_bit2(int num)
{
	int k=1;
	int count=0;
	while(num)
	{
		if((num&1)!=0)
			count++;
		num=num>>1;
	}
	return count;
}
int main()
{
	int num;
	cin>>num;
	cout<<total_set_bit2(num);
	return 0;

}

// time complexity is O(n), where n is max number of bits i.e 32.
// Can also be said as theta(log2(n))