#include<bits/stdc++.h>
using namespace std;
void only_odd_occurence(int num[],int length)
{
	for(int i=0;i<length;i++)
	{
		int count=0;
		for(int j=0;j<length;j++)
		{
			if(num[i]==num[j])
				count++;
		}
		if(count%2==1)
			cout<<num[i];
		if(i<length-1)
			cout<<endl;
	}
}
int main()
{
	int length;
	cin>>length;
	int num[length];
	for(int i=0;i<length;i++)
		cin>>num[i];
	only_odd_occurence(num,length);
	return 0;
}

// time complexity is O(n^2).