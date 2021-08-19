#include<bits/stdc++.h>
using namespace std;
bool check_prime(int num){
	if(num<=1)
		return false;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
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

//time complexity is O(n^(1/2))