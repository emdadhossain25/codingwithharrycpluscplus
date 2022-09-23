#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// nesting of member function

class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};

void Binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0); // exits the function
        }
    }
    cout<<"Correct Binary Number"<<endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // OOPS - classess and object

    // C++ --> was initially called C with classes by stroustroup
    // class --> extensions of structures (from c) by stroustoup
    // structures had limitations
    // members are public
    // no methods

    // classes --> structures+more
    // classes --> can have methods and properties;
    // classes --> can make a few members as private and make few as public
    // structures in C++ are typedef
    // you can declare objects along with class declaration

    /**
     * Class Employee{
     * class definition
     * } harry, rohan,lovish
     * */
    // harry.salary = 8 makes no sense if salary is private member

    // driver function for binary
    Binary b;
    b.read();
    b.chk_bin();
    return 0;
}