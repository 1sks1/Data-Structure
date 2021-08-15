// Best Approach

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int num_zeros =0;
	int i=1;
	while(num/pow(5,i))
	{
		num_zeros=num_zeros+num/pow(5,i);
		i++;
	}

	cout<<num_zeros;

	return 0;

}

// Space complexity will be O(1).

// Time complexity=> 5^k=n
//					==> k=log(n) base 5
//	Time complexity is log(N).