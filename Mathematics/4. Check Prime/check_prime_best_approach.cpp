#include<bits/stdc++.h>
using namespace std;
bool check_prime(int num){
	if(num<=1)
		return false;
	if(num==2||num==3)
		return true;
	if(num%2==0||num%3==0)
		return false;
	for(int i=5;i<=sqrt(num);i+=6)
	{
		if(num%i==0||num%(i+2)==0)
			return false;
	}
	return true;
}
int main(){
	int num;
	cin>>num;
	cout<<check_prime(num);
	return 0;
	
}

//best Approach
//time complexity is O(n^(1/2))