#include<iostream>
using namespace std;
int main()
{
	string name;
	int rollNo;
	string dept;
	int marks[5];
	
	cout<<"Enter name:";
	getline(cin,name);
	
	cout<<"Enter roll number: ";
	cin>>rollNo;
	
	cout<<"Enter Department: ";
	cin.ignore();
	getline(cin,dept);
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter marks for subject "<<i+1<<":"<<endl;
		cin>>marks[i];
	}
	
	
	int total = 0;
	for(int i =0; i<5; i++)
	{
		total += marks[i];
	}
	
	float avg = total / 5.0;
	
	cout << "\n----------- Student Report -----------" << endl;

    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollNo << endl;
    cout << "Department : " << dept << endl;

    cout << "\nMarks:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }

    cout << "\nTotal Marks : " << total << endl;
    cout << "Average     : " << avg << endl;

	
	return 0;
} 