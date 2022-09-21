// what is function overloading ->

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    cout << endl;
    cout << "using function with two arguments" << endl;
    return a + b;
}

// calculate the volume of a cylinder
int volume(int r, int h)
{
    return 3.1416 * (r * r) * h;
}

// calculate the volume of a cube
int volume(int a)
{
    return a * a * a;
}

// calculate the volume of a regular box
int volume(int l, int b, int h)
{
    return l * b * h;
}
int sum(int a, int b, int c)
{
    cout << endl;
    cout << "using function with three arguments" << endl;
    return a + b + c;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // cout << "Sum of 3 and 6 are " << sum(3, 6) << endl;
    // cout << "Sum of 3 , 6 and 9 are " << sum(3, 6, 9) << endl;
    cout << "The volume of cube is " << volume(3) << endl;
    cout << "The volume of cylinder is " << volume(3, 6) << endl;
    cout << "The volume of regular is " << volume(3, 6, 9) << endl;
    return 0;
}