#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// make a function only when there is minimal or no code to be executed if function is bigger then there will be memory ran out issue while compiling codes
inline int product(int, int);
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    // lets call the product function 10 times(which takes time to return the value from product to main )
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    cout << "The product of a and b are: " << product(a, b) << endl;
    return 0;
}

// inline function makes the return of a*b inside main instead of calling this function in compile time which reduces cost of making function calls instead it changes function calls to function code
inline int product(int a, int b)
{
    return a * b;
}