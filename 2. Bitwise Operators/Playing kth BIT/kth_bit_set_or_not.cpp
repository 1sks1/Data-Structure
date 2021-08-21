#include<bits/stdc++.h>
using namespace std;
bool check_kth_bit_set(int num,int k)
{
	if((num>>(k-1))&1==1) // or if((num>>(k-1))!=0)
		return true;
	return false;
}
int main()
{
	int num,k;
	cin>>num>>k;
	if(check_kth_bit_set(num,k)==true)
		cout<<"Yes, it exist";
	else
		cout<<"No, it doesn't exist";
	return 0;
}
