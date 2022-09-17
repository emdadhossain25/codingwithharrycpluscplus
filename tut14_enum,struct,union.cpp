#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// structure is a data type which holds different types of datatypes
typedef struct employee
{
    int code;
    float salary;
    string name;
} emp;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    emp emp1;
    emp emp2;
    emp emp3;
    emp1.name = "harry";
    emp1.salary = 1400.00;
    emp1.code = 1;

    emp2.name = "emdad";
    emp2.salary = 1440.00;
    emp2.code = 3;

    emp3.name = "hossain";
    emp3.salary = 1444.00;
    emp3.code = 2;

    cout << endl;
    cout << emp1.name << endl;
    cout << emp1.code << endl;
    cout << emp1.salary << endl;

    cout << endl;
    cout << emp2.name << endl;
    cout << emp2.code << endl;
    cout << emp2.salary << endl;

    cout << endl;
    cout << emp3.name << endl;
    cout << emp3.code << endl;
    cout << emp3.salary << endl;

    return 0;
}