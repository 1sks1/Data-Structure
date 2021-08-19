#include<iostream>
#include<math.h>
using namespace std;
const int M = (pow(10,9)+7);
int binary_exponential(int n,int m)
{
	if(m==0)
		return 1;
	int res=1;
	while(m>0)
	{
		if(m & 1)
			res=(res*n)%M;
		m=m>>1;
		n=(n*n)%M;

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