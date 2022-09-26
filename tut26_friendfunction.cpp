#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 1+4i
// 5+8i
// -----
// 6+12i
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    //  this is the friend function, this is only declaration not a member function
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
};

// to access private data we make this friend function- non member functions are allowed to access private members
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();
    cout << endl;

    c2.setNumber(5, 8);
    c2.printNumber();
    cout << endl;

    sum = sumComplex(c1, c2);
    sum.printNumber();
    cout << endl;
    return 0;
}

/**
 * @brief Properties of friend function
 *  1. Not in the scope of class (not a part of the class its a declaration only)
 *  2. Since it's not in the scope of the class, it cannot be called from the object of the class. c1.sumComplex() == Invalid
 *  3. can be invoked without any help of objects
 *  4. usually takes objects as arguments
 *  5. can be declared in public or private parts of the class
 *  6. it cannot access member directly , need object_name.member to access any member
 */
