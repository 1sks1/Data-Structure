// lookup table for 32 bit numbers

#include<bits/stdc++.h>
using namespace std;
int table[256];
void look_up_table()
{
	table[0]=0;
	for(int i=0;i<256;i++)
	{
		table[i]=(i&1)+ table[i/2];
	}
}
int count_set_bits(int num)
{
	int res= table[num & 0xff];
	num=num>>8;

	res= res + table[num & 0xff];
	num=num>>8;

	res= res + table[num & 0xff];
	num=num>>8;

	res= res + table[num & 0xff];
	
	return res;
}
int main()
{
	int num;
	cin>>num;
	look_up_table();
	cout<<count_set_bits(num);
	return 0;
}

// time complexity is O(1)... constant;