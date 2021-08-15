#include<iostream>
using namespace std;

int binary_exponential(int n,int m)
{
	if(m==0)
		return 1;
	int res=1;
	while(m>0)
	{
		if(m%2!=0)
			res=res*n;
		m=m/2;
		n=n*n;

	}
	return res;
}

int main()
{
	int n,m;
	cin>>n>>m;
	cout<<binary_exponential(n,m);
	return 0;
}

//time complexity is O(log(n))
// Auxilary space is O(1)
// this code can further be optimised using bitwise operator.