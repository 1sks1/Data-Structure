#include<bits/stdc++.h>
using namespace std;
int count_set_bits(int num)
{
	int count =0;
	while(num>0)
	{
		if(num%2==1)  // if((num&1)=1)
			count++;  //   count++;   or count=count+(num&1);
		num=num/2; // or num=(num>>1);
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

// time comlexity is theta(total bits in num).
// this is neive solution.