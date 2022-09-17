#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    /************************ constants in c++****************/
    // int a =34;
    // float const pi =3.14;
    // cout<<"the value of a was "<<a<<endl;
    // a=45;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of pi is "<<pi<<endl;
    // pi =3.1416 // will get an error because pi is a constant
    // cout<<"the value of pi is "<<pi<<endl;

    /************************ manipulators in c++****************/
    // int a = 3, b = 4, c = 1234;

    // cout << "The value of a without setw is " << a << endl;
    // cout << "The value of b without setw is " << b << endl;
    // cout << "The value of c without setw is " << c << endl;

    // cout << "The value of a without setw is " << setw(4) << a << endl;
    // cout << "The value of b without setw is " << setw(4) << b << endl;
    // cout << "The value of c without setw is " << setw(4) << c << endl;

    /************************ operators precedence in c++****************/
    int a = 3;
    int b = 4;
    int c = ((((a * 5) + b) - 45) + 87); // precedence, bracket, order(LTR)
    cout << c << endl;

    return 0;
}