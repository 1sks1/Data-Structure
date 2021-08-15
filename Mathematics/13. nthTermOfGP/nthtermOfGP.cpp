#include<iostream>
#include<math.h>
using namespace std;
double termOfGP(double A,double B, int N)
{
	double r= B/A;
	return A*pow(r,N-1);
}
int main()
{
	double A,B;
	int N;
	cin>>A>>B>>N;
	double nthterm=termOfGP(A,B,N);
	cout<<floor(nthterm);
}

// time complexity is O(log(N)) because of pow( ) function.
// space complexity is O(1)