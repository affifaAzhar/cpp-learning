#include <iostream>
using namespace std;
int main()
{
	string name, degree, university;
	int age;
	
	cout<<"Enter your name: ";
	getline(cin,name);
	
	cout<<"Enter your age: ";
	cin>>age;
	
	cout<<"Enter name of your university: ";
	cin.ignore();
	getline(cin,university);
	
	cout<<"Enter your degree: ";
	cin>>degree;
	
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"University: "<<university<<endl;
	cout<<"Degree: "<<degree<<endl;
	
	return 0;
}