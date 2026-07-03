#include<iostream>
using namespace std;
int main()
{
	float C;
	
	cout<<"Enter temperature in Celcius: ";
	cin>>C;
	
	float F = (C * 9/5) + 32;
	
	cout<<"Temperature in celcius: "<<C<<endl;
	cout<<"Temperature in Fahrenheit: "<<F<<endl;
	
	return 0;
}