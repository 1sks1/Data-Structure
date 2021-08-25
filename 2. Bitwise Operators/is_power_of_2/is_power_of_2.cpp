#include<bits/stdc++.h>
using namespace std;
bool isPow2(int num)
{
	while(num>0&&num!=2)
	{
		if(num%2==1)
			return false;
		num=num/2;
	}
	return num==2;
}
int main()
{
	int num;
	cin>>num;
	cout<<isPow2(num);
	return 0;
}

// time complexity is (logn)