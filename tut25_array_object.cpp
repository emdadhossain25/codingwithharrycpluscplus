#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{

    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter employee id " << endl;
        cin >> id;
    }

    void getId()
    {

        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Employee emdad,hossain;
    // emdad.setId();
    // emdad.getId();
    // hossain.setId();
    // hossain.getId();

    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}