#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// forward declaration - saying to compiler that the following class definition will be given
class Complex;

class Calculator
{
    int a, b;

public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{

    int a, b;

    // declaring friend functions individually
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumComComplex(Complex o1, Complex o2);

    //Aliter: Declare Entire Calculator class as Friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    Complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(4, 7);
    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    result = calc.sumComComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << result << endl;

    return 0;
}