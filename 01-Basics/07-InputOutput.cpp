#include <iostream>
using namespace std;
int main()
{
    string name, university, degree;
    int age;

    // Use of cin and cout for input and output
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter name of your university: ";
    cin.ignore();
    getline(cin, university);
    cout<<"Enter your degree: ";
    getline(cin,degree);

    cout<<"----Student Information----";
    cout<<"\nName: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"University: "<<university<<endl;
    cout<<"Degree: "<<degree<<endl;

    return 0;
}