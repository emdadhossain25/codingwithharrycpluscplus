#include <iostream>

using namespace std;

int c = 39;
int main()
{
    //***********Built in data types******************
    // int a, b, c;
    // cout << "enter the value of a " << endl;
    // cin >> a;

    // cout << "enter the value of b " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "the sum is c:" << c << endl;
    // cout<<"the value of global c is: "<<::c<<endl;

    //***********float, double and long double literals******************
    // float d = 34.5f;       // by default it is double to make float we add a f at end;
    // long double e = 34.5l; //  by default it is double to make long we add a f at end;
    // cout << "the value of d is: " << d << endl
    //      << "The value of e is: " << e << endl;
    // cout << "the size of 34.5 is " << sizeof(34.5) << endl;
    // cout << "the size of 34.5f is " << sizeof(34.5f) << endl;
    // cout << "the size of 34.5F is " << sizeof(34.5F) << endl;
    // cout << "the size of 34.5l is " << sizeof(34.5l) << endl;
    // cout << "the size of 34.5L is " << sizeof(34.5L) << endl;

    //***********Reference Variables******************
    // Rohan-------->Monty---------->Rohu----------->Dangerous Coder

    float x = 455;
    float &y = x; // here is y is reference variable which is the same variable with different names
    cout << x << endl;
    cout << y << endl;

    //***********Typecasting******************
    int a = 45;
    float b = 5.46;
    // cout << "The value of a is: " << (float)a << endl;
    // cout << "The value of a is: " << float(a) << endl;

    // cout << "The value of b is: " << (int)b << endl;
    // cout << "The value of b is: " << int(b) << endl;

    int c = int(b);
    cout << "The expression is: " << a + b << endl;
    cout << "The expression is: " << a + (int)b << endl;
    cout << "The expression is: " << a + int(b) << endl;
    return 0;
}