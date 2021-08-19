#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int num1,num2;
 	cin>>num1>>num2;
 	int gcd;
 	if(num1==num2)
 	{
 		cout<<num1;
 		return 0;
 	}
 	if(num1>num2)
 	{
 		gcd=num2;
 		while(num1%gcd!=0)
 		{
 			int temp = num1;
 			num1=gcd;
 			gcd=temp%gcd;

 		}
 		cout<<gcd;
 	}
 	else
 		{
	 		gcd=num1;
	 		while(num2%gcd!=0)
	 		{
	 			int temp = num2;
	 			num2=gcd;
	 			gcd=temp%gcd;

	 		}
	 		cout<<gcd;
 		}

 		return 0;


 }