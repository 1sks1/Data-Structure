// given an array of size n with values ranging from 1 to n+1
// here one number is missing. Find the missing one.
#include<bits/stdc++.h>
using namespace std;
int xor_constant(int length)
{
	int res=0;
	for(int i=1;i<=length+1;i++)
	{
		res=res^i;
	}
	return res;
}
int find_missing_num(int arr[],int length)
{
	int res_arr=0;
	for(int i=0;i<length;i++)
	{
		res_arr=res_arr^arr[i];
	}
	res_arr=res_arr^xor_constant(length);
	return res_arr;
}
int main()
{
	int length;
	cin>>length;
	int arr[length];
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
	}
	cout<<find_missing_num(arr,length);
	return 0;
}