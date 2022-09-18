#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int num1, num2;
    cout << "Enter first number\n";
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2)<<endl;

    return 0;
}