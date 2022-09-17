#include <iostream>
using namespace std;

// there are two types of header files
// 1. system header files/compiler header files
// 2. user defined header files which are created by programmer
int main()
{
    int a = 4, b = 5;
    cout << "Hello World!" << endl;
    cout << "operators in c++" << endl;
    cout << "following are the operators in c++" << endl;
    cout << endl;

    // arithmatic operator
    cout << "following are the arithmatic operators in c++" << endl;
    cout << "the value of a+b " << a + b << endl;
    cout << "the value of a-b " << a - b << endl;
    cout << "the value of a*b " << a * b << endl;
    cout << "the value of a/b " << a / b << endl;
    cout << "the value of a%b " << a % b << endl;
    cout << "the value of a++ " << a++ << endl;
    cout << "the value of a-- " << a-- << endl;
    cout << "the value of ++a " << ++a << endl;
    cout << "the value of --a " << --a << endl;
    cout << endl;

    // assignment operators
    // int a=4;
    // bool b =false;
    // char c= 'i';

    // comparison operators
    cout << "following are the comparison operators in c++" << endl;
    cout << "the value of a==b is: " << (a == b) << endl;
    cout << "the value of a!=b is: " << (a != b) << endl;
    cout << "the value of a>b is: " << (a > b) << endl;
    cout << "the value of a<b is: " << (a < b) << endl;
    cout << "the value of a<=b is: " << (a <= b) << endl;
    cout << "the value of a>=b is: " << (a >= b) << endl;
    cout << endl;

    // logical operators
    cout << "following are the logical operators in c++" << endl;
    cout << "the value of this logical and operator ((a == b) && (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "the value of this logical or operator ((a == b) || (a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "the value of this logical not operator !(a == b) is: " << !(a == b)  << endl;

    return 0;
}