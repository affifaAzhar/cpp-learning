#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3;
	
	cout<<"Enter marks of English: ";
	cin>>m1;
	
	cout<<"Enter marks of Physics: ";
	cin>>m2;
	
	cout<<"Enter marks of Maths: ";
	cin>>m3;
	
	int total ;
	total = m1+m2+m3;
	
	float avg = (m1+m2+m3)/3;
	
	cout<<"Marks in English: "<<m1<<endl;
	cout<<"Marks in Physics: "<<m2<<endl;
	cout<<"Marks in Maths: "<<m3<<endl;
	cout<<"Total Marks: "<<total<<endl;
	cout<<"Average Marks: "<<avg<<endl;
	
	return 0;
}