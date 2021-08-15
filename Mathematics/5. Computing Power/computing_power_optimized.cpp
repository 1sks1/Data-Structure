#include<iostream>
using namespace std;
int compute_power(int n,int m)
{
	if(m==0)
		return 1;
	int temp=compute_power(n,m/2);
	temp=temp*temp;
	if(m%2==0)
		return temp;
	else
		return temp*n;
	return 1;
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<compute_power(n,m);
}

// time complexity is T[n]=T[n/2]+T[n/4]+..+constant=> time complexity is theta(log(n));


// Since it is recursive solution, auxillary space is theta(log(n)).