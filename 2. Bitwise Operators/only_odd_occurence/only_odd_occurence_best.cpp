#include<bits/stdc++.h>
using namespace std;
int only_odd_occurence(int num[],int length)
{
	int res=0;
	for(int i=0;i<length;i++)
		res=res^num[i];
	return res;

}
int main()
{
	int length;
	cin>>length;
	int arr[length];
	for(int i=0;i<length;i++)
		cin>>arr[i];
	cout<<only_odd_occurence(arr,length);
	return 0;
}

//time complexity is O(n).