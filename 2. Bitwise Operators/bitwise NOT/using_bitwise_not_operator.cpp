#include<bits/stdc++.h>
using namespace std;
int bitwise_not_operator(int x)
{
	return ~x;
}
int main()
{
	int n;
	cin>>n;
	cout<<"bitwise not of -n is "<<bitwise_not_operator(n);
	return 0;
}