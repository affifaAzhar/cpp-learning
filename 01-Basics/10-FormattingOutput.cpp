#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name = "Affifa";
    int age = 19;
    float cgpa = 3.6348;
    char grade = 'A';
    bool isPassed = true;

    cout<<"=======Student Information========\n";
    cout<<left<<setw(12)<<"Name: "<<name<<endl;
    cout<<left<<setw(12)<<"Age: "<<age<<endl;
    cout<<fixed<<setprecision(2);
    cout<<left<<setw(12)<<"CGPA: "<<cgpa<<endl;
    cout<<left<<setw(12)<<"Grade: "<<grade<<endl;
    cout<<boolalpha;
    cout<<left<<setw(12)<<"Passed: "<<isPassed<<endl;

    cout<<"===================================";

    return 0;
}