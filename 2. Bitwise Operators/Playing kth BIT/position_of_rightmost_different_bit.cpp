#include<bits/stdc++.h>
using namespace std;
int pos_rightmost_different_bit(int num1,int num2)
{
	int k=1;
	while((num1&k)==(num2&k))
	{
		k=k<<1;
	}
	return k;
}
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	cout<<pos_rightmost_different_bit(num1,num2);
	return 0;

}

// time complexity is O(n), where n is max number of bits i.e 32.