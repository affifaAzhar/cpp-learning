#include<iostream>
using namespace std;
int main()
{
	float l = 12.5;
	float w = 6.2;
	float area;
	float perimeter;
	
	area = l* w;
	perimeter = 2*(l+w);
	
	cout<<"Length of rectangle: "<<l<<endl;
	cout<<"Width of rectangle: "<<w<<endl;
	cout<<"Area of rectangle: "<<area<<endl;
	cout<<"Perimeter of rectangle: "<<perimeter<<endl;
	
	return 0;
}