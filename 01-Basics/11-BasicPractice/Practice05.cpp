#include<iostream>
using namespace std;
int main()
{
	float r;
    const double PI = 3.147;
	
	cout<<"Enter radius of circle: ";
	cin>>r;
	
	float diameter = 2*r;
	float circumference = 2*PI*r;
	float area = PI*r*r;
	
	cout<<"Radius of circle: "<<r<<endl;
	cout<<"Diameter of circle: "<<diameter<<endl;
	cout<<"Circumference of circle: "<<circumference<<endl;
	cout<<"Area of circle: "<<area<<endl;
	
	return 0;
}