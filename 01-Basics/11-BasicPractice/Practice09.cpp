#include<iostream>
using namespace std;
int main()
{
	int totalSeconds;
	
	cout<<"Enter total seconds: ";
	cin>>totalSeconds;
	
	int hours = totalSeconds/3600;
	int remainingSeconds = totalSeconds%3600;
	
	int minutes = remainingSeconds/60;
	int seconds = remainingSeconds%60;
	
	cout<<"Hours: "<<hours<<endl;
	cout<<"Minutes: "<<minutes<<endl;
	cout<<"Seconds: "<<seconds<<endl;
	
	return 0;
} 