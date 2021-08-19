#include<iostream>
using namespace std;
int absolute_value(int num)
{
	if(num<0)
		return -1*num;
	return num;
}
int main()
{
	int num;
	cin>>num;
	cout<<absolute_value(num);
	return 0;
}