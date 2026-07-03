#include <iostream>
using namespace std;
int main()
{
    //Declaring variables

    string name = "Affifa";
    int age = 19;
    float cgpa = 3.63;
    char grade = 'A';
    bool isStudent = true;

    cout<<boolalpha;

    cout<<"----Student Profile----";
    cout<<"\nName: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Cgpa: "<<cgpa<<endl;
    cout<<"Grade: "<<grade<<endl;
    cout<<"Is a Student: "<<isStudent<<endl;
    return 0;
}