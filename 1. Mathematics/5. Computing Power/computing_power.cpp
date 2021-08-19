#include<iostream>
using namespace std;
int compute_power(int n,int m)
{
	int result=1;
	if(n==0)
		return 0;
	if(m==0)
		return result;
	else
		while(m>0)
		{
			result=result*n;
			m--;
		}

	return result;
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<compute_power(n,m);
	return 0;
}
//time complexity is O(n);