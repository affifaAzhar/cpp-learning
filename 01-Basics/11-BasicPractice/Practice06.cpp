#include<iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 6;
	
	cout<<"Value of a before swapping: "<<a<<endl;
	cout<<"Value of b before swapping: "<<b<<endl;
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	cout<<"Value of a after swapping: "<<a<<endl;
	cout<<"Value of b after swapping: "<<b<<endl;
	
	return 0;
} 