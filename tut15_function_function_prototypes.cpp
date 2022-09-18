#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// type functionname(arguments) --> prototype

// int sum(int a, int b); --> acceptable
// int sum(int num1,  num2); --> not acceptable
int sum(int, int); //-->this is also acceptable

// void g(void); //--> acceptable
void g(); //--> acceptable

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int num1, num2;
    cout << "Enter first number\n";
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;

    // num1 and num2 are actual parameters
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;
    g();
    return 0;
}

// declaring after the main function --> solution to this problem is function prototype (declaring function signature in front)
int sum(int a, int b)
{
    // a and b are formal parameters
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello World!" << endl;
}