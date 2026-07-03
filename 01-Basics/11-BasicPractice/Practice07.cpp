#include<iostream>
using namespace std;
int main()
{
	string name;
	int quantity;
	int price;
	
	cout<<"Enter name of product: ";
	cin>>name;
	
	cout<<"Enter quantity: ";
	cin>>quantity;
	
	cout<<"Enter price: ";
	cin>>price;
	
	int total = quantity*price;
	
	cout<<"Total price for "<<quantity<<" "<<name<<": "<<total;
	
	return 0;
} 