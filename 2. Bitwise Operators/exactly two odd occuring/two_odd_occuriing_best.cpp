#include<bits/stdc++.h>
using namespace std;
void two_odd_occurence(int arr[],int length)
{
	int XOR=0;
	int res1=0,res2=0;
	for(int i=0;i<length;i++)
	{
		XOR=XOR^arr[i];
	}
	int last_active_bit=XOR&~(XOR-1);
	for(int i=0;i<length;i++)
	{
		if(arr[i]&last_active_bit!=0)
			res1=res1^arr[i];
		else
			res2=res2^arr[i];
	}
	printf("%d %d",res2,res1);

}
int main()
{
	int length;
	cin>>length;
	int num[length];
	for(int i=0;i<length;i++)
		cin>>num[i];
	two_odd_occurence(num,length);
	return 0;
}
