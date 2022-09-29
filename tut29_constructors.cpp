#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    // Constructor -special member function with the same name as of the class used to initialize the objects of its class. It is automatically invoked(called)
public:
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "your complex number is " << a << "+i" << b << endl;
    }
};

/**
 * @brief Constructor definition
 *
 * @return Complex
 */
Complex ::Complex(void) // --> This is default constructor as it does not take any parameters
{
    a = 10;
    b = 0;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    Complex c, c2, c3;
    c.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/**
 * @brief Characteristics of Constructors
1.Should be declared in the public section of the class;
2.They are automatically invoked when the object is created
3.They do not have return types thus no return values
4.It can have default arguments
5.We cannot refer to their address
 */
