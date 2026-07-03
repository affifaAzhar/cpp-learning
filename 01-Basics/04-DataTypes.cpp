#include<iostream>
using namespace std;
int main()
{
	// Datatypes
	// char is used for characters or single letter.
	int age = 19; // we use int for integers
	string name = "Affifa azhar"; // string for names
	float height = 5.6; // float and double for decimal values
	int x = 5;
	int y = 8; 
	int sum = x+y;
	bool mybool = true; // bool for 0, 1 or true false
	cout<<boolalpha; // we use this line bcz we want to print the word true false not 0 and 1 if we want 0 and 1 we will not write boolalpha.
	cout<<"My name(string) is "<<name
    <<". My age(int) is "<<age
    <<". My height(float) is "
    <<height<<"."<<endl;
	cout<<"The sum of "<<x<<" and "<<y<<" is "<<sum
    <<" which is(boolean) "<<mybool<<"!";
    return 0;
	}