#include<bits/stdc++.h>
using namespace std;
int find_first_set_bit(int n)
{
	int count=1;
	if(n%2==1)
		return 1;
	while((n%2!=1)&&(n>0))
	{
		n=(n>>1);
		count++;
	}
	if(n%2==1)
		return count;
	return 0;
}
int main()
{
	int n;
	cin>>n;
	cout<<find_first_set_bit(n);
}