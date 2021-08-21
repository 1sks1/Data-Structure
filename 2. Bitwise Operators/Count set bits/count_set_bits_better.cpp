//Brian Karingham's Algorithms
// better than naive approach

#include<bits/stdc++.h>
using namespace std;
int count_set_bits(int num)
{
	int count =0;
	while(num>0)
	{
		num=num&(num-1);
		count++;
	}
	return count;
}
int main()
{
	int num;
	cin>>num;
	cout<<count_set_bits(num);
	return 0;
}

// time comlexity is theta(number of set bits in num).
// this is neive solution.