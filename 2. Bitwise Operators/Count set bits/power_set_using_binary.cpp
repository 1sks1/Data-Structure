// If given string is "abc" then we need to find all the 
// possible subsets of abc i.e. " ", "a", "b", "c","ab", "bc", "ca", ""abc.

#include<bits/stdc++.h>
using namespace std;

void power_set(string str)
{
	int length = str.length();
	int powsize= pow(2,length);
	for(int counter=0;counter<powsize;counter++)
	{
		for(int j=0;j<length;j++)
		{
			if((counter&(1<<j))!=0)
				printf("%c",str[j] );
		}
		printf("\n");
	}
}
int main()
{
	string str;
	cin>>str;
	power_set(str);
	return 0;
}

// time complexity is theta(2^length*length)...
//  here length is length of string.