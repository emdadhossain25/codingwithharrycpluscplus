#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //  what is pointer? -->is a data type holds the address of other data types
    int a = 3;

    // int* pointer for int type;
    int *b = &a;

    // & --> (address of operator);
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;

    // * dereferencing operator ; prints value of int a
    cout << "The value at address b is: " << *b << endl;

    int **c = &b; // pointer to pointer (double star to store adress of a pointer to another pointer)

    cout<<"the address of b in c is "<<c<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the value_at c is "<<*c<<endl;
    cout<<"the value_at(value_at c )is "<<**c<<endl;

    return 0;
}