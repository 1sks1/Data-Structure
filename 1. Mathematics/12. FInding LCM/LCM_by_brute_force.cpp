#include<bits/stdc++.h>
using namespace std;
int main(){
	int num1,num2;
	cin>>num1>>num2;
	int lcm=max(num1,num2);
	while(true)
	{
		if((lcm%num1==0)&&(lcm%num2==0))
		{
			cout<<lcm;
			break;
		}
		lcm++;
	}
	return 0;
}

// time complexity is O(max(num1,num2));