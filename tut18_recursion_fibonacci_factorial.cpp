// recursion and recursive function

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int);
int fibonacci(int);
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // factorial of a number
    // 6! = 6*5*4*3*2*1 =720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n*(n-1)! definition of factorial n;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    // cout << "The factorial of a is " << factorial(n) << endl;
    cout << "The term in fibonacci sequence position for " << n << " is at " << fibonacci(n) << endl;
    return 0;

    // step by step definition of factorial 4
    // 4! = 4*factorial(3)
    // 3! =4*3*factorial(2)
    // 2! =4*3*2*factorial(1)
    // finally
    // 4! =4*3*2*1;
    // 4!  =24;
}

int factorial(int n)
{
    // base condition-> is a condition on which recursion is finished
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);
}