#include<iostream>
#include<string>
using namespace std;
int main()
{
	// basic string
	string greet = "Hello! I\'m Afffia.";
	cout<<greet<<endl;
	
	//concatenation
	string firstName = "Affifa ";
	string lastName = "Azhar";
	string fullName = firstName + lastName;
	cout<<"My full name is "<<fullName<<endl;
	string fname = firstName.append(lastName);
	cout<<fname<<endl;
	
	//addition of string
	string n1= "23";
	string n2= "2";
	string num = n1+n2;
	cout<<num<<endl;
	
	// string length
	string txt = "ABCDEFGHIJ";
	cout<<"The length of string is "<<txt.length()<<endl;
	cout<<"The length of string is "<<txt.size()<<endl;
	
	// string access
	string myString = "Hello";
	cout<<myString[0]<<endl;
	cout<<myString[3]<<endl;
	myString[0]='J';
	cout<<myString<<endl;
	
	// special characters
	string text = "WE are so called \"Vikings\" from Norway.";
	cout<<text<<endl;
	
	// input strings
	string name;
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"My name is:"<<name<<endl;
	
	// for full name we use get line other wise we will ony get first name
	string fullname;
	cout<<"Enter your name:"<<endl;
	cin.ignore();
	getline(cin,fullname);
	cout<<"My name is:"<<fullname;

}