#include <iostream>
using namespace std;

int main()
{
    // Arithmetic Operators

    int a = 6;
    int b = 3;

    cout << "Arithmetic Operators" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl << endl;

    // Increment and Decrement Operators

    int c = 10;

    c++;        // Post-increment
    cout << "After c++: " << c << endl;

    c = 15;

    --c;        // Pre-decrement
    cout << "After --c: " << c << endl << endl;

    // Assignment Operators

    int num = 10;

    cout << "Assignment Operators" << endl;

    num += 5;
    cout << "After += 5: " << num << endl;

    num -= 3;
    cout << "After -= 3: " << num << endl;

    num *= 2;
    cout << "After *= 2: " << num << endl;

    num /= 4;
    cout << "After /= 4: " << num << endl;

    num %= 3;
    cout << "After %= 3: " << num << endl << endl;

    // Comparison Operators

    cout << boolalpha;

    int age = 18;

    cout << "Comparison Operators" << endl;
    cout << "age > 18 : " << (age > 18) << endl;
    cout << "age == 18 : " << (age == 18) << endl;
    cout << "age != 18 : " << (age != 18) << endl;
    cout << "age <= 18 : " << (age <= 18) << endl << endl;

    // Logical Operators

    int x = 10;

    cout << "Logical Operators" << endl;
    cout << "(x > 5 && x < 11): " << (x > 5 && x < 11) << endl;
    cout << "(x < 5 || x > 9): " << (x < 5 || x > 9) << endl;
    cout << "!(x == 10): " << !(x == 10) << endl;
    cout << "(x < 5 && x < 11): " << (x < 5 && x < 11) << endl;
    cout << "(x < 5 || x < 9): " << (x < 5 || x < 9) << endl;
    cout << "!(x == 9): " << !(x == 9) << endl << endl;

    // Operator Precedence

    int y = 10;
    int z = 2;
    x = 6;

    cout << "Operator Precedence" << endl;
    cout << "(x + y) * z = " << (x + y) * z << endl;
    cout << "x + (y * z) = " << x + (y * z) << endl;
    cout << "x * y / z = " << x * y / z << endl;
    cout << "x * (y / z) = " << x * (y / z) << endl;

    return 0;
}