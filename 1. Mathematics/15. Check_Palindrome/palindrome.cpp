#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int num_copy=num;
	int reverse_num=0;
	while(num_copy>0)
	{

		reverse_num = reverse_num*10+num_copy%10;
		num_copy=num_copy/10;
	}
	int is_palindrome=0;
	if(reverse_num==num)
		is_palindrome= 1;
	cout<<num<<endl<<reverse_num<<endl<<is_palindrome;
	return is_palindrome;
}
