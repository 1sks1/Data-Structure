#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int> quadratic_equation_roots(int a,int b,int c)
{
	vector<int> roots;
	double D = pow(b,2)-4*a*c;
	if(D<0)
	{
		cout<<"Imaginary ";
		roots.push_back(-1);
		return roots;
	}
	else
	{
		double num1= (double)(-b-sqrt(D));
		double num2= (double)(-b+sqrt(D));
		int root1= num1/(2*a);
		int root2= num2/(2*a);
		roots.push_back(root1);
		roots.push_back(root2);
	}
	return roots;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	vector<int> roots=quadratic_equation_roots(a,b,c);
	vector<int> :: iterator ptr=roots.begin();
	while(ptr!=roots.end())
	{
		cout<<*ptr<<' ';
		ptr++;	
	}
	return 0;
}
//time complexity is O(1)
// space complexity is O(1)