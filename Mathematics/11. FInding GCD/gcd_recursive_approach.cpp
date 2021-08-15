//GCD using Eucildean Algorithm

#include<bits/stdc++.h>
using namespace std;

//Eucildean Algorithm

int gcd_calculator(int num1,int num2)
{
	if(num2==0)
		return num1;
	else
		return gcd_calculator(num2,num1%num2);
}

 int main(){
 	int num1,num2;
 	cin>>num1>>num2;
 	cout<<gcd_calculator(num1,num2);
 	return 0;
 }


 //time complexity is O(log(n))
 // auxalliary space complexity is O(log(n))