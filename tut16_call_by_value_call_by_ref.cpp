#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b);
void swap(int a, int b);
void swapPointer(int *a, int *b);
void swapReferenceVar(int &a, int &b);
// int & swapReferenceVar(int &a, int &b);
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, b;
    cout << "enter the value of a:" << endl;
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    // cout << "sum of " << a << " and " << b << " is: " << sum(a, b) << endl;

    // cout << "The value of a before swap is :" << a << endl;
    // cout << "The value of b before swap is :" << b << endl;

    // swap(a, b); // this will not work

    // cout << "The value of a after swap() is :" << a << endl;
    // cout << "The value of b after swap() is :" << b << endl;

    // swapPointer(&a, &b); // this will work
    swapReferenceVar(a, b);
    ; // this will work --> here addressess of a and b are reference from tut07.cpp

    // cout << "The value of a after swapPointer() is :" << a << endl;
    // cout << "The value of b after swapPointer() is :" << b << endl;

    cout << "The value of a after swapReferenceVar() is :" << a << endl;
    cout << "The value of b after swapReferenceVar() is :" << b << endl;

    return 0;
}

// call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference variables (c++ functionality)
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
// int & swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

// call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}