#include<iostream>
using namespace std;
double celcius_to_fahrenheit(int temp)
{

	return (double)temp*9/5+32;	
}
int main()
{
	int temp_in_celcius;
	cin>>temp_in_celcius;
	cout<<celcius_to_fahrenheit(temp_in_celcius);
	return 0;


}