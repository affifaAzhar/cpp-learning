#include <iostream>
using namespace std;
int main()
{
    // A const variable cannot be modified after it is initialized.

    // This would cause a compilation error:
    // const int num = 15;
    // num = 10;
    // cout<<num;
    const int num = 15;
    cout<<"Number: "<<num<<endl;
    return 0;
}