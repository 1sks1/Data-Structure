// we need to find all the numbers less than or equal to N who have exactly 3 divisors.
// which can also be termed as, find all the square number less than or equal to N.
#include<bits/stdc++.h>
using namespace std;
bool check_prime(int num)
{
	if(num<=1)
		return false;
	else if(num==2||num==3)
		return true;
	else if(num%2==0||num%3==0)
		return false;
	for(int i=5;i<=sqrt(num);i+=6)
	{
		if(num%i==0||num%(i+2)==0)
			return false;
	}
	return true;

}
int exactly_three_divisors(int N)
{
	int num= sqrt(N);
	int count =0;
	for(int i=2;i<=num;i++)
	{
		if(check_prime(i))
			count++;
	}
	return count;
}
int main()
{
	int N;
	cin>>N;
	cout<<exactly_three_divisors(N);
	return 0;
}

//time complexity is O(n^(1/2)*n^(1/4))
// space complexity is O(1)