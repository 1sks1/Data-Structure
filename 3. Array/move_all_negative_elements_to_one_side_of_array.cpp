#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int count =0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			int curr = arr[i];
			arr[i] = arr[count];
			arr[count]=curr;
			count++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<' ';
	}
	return 0;
}