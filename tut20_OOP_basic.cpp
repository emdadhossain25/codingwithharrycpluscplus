// OOP is a approach for coding
// why->

// only class declaration does not takeup any spaces in OOP , making objects does
// a class is a template to create objects
// treats data as critical element (in oop ), function is critical in (pop)
// structures can not have data hiding can be accessed from anywhere
// structures cant have functions
// hence we use class ->

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    Employee emdad;
    emdad.setData(1, 2, 3);
    emdad.d = 34;
    emdad.e = 89;
    emdad.getData();

    return 0;
}