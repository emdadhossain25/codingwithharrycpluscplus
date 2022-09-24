

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    static int count;

    /**
     * @brief static function
     * we need static functions which can access only static member variables
     */

public:
    void setData(void)
    {
        cout << "Enter id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is Employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count = 1000; // default value is 0 for static values;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    Employee emdad;
    emdad.setData();
    emdad.getData();
    Employee::getCount(); // accessing static variable from class directly without any objects

    emdad.setData();
    emdad.getData();
    Employee::getCount(); // accessing static variable from class directly without any objects

    emdad.setData();
    emdad.getData();
    Employee::getCount(); // accessing static variable from class directly without any objects

    // harry.id= 1; can't do this as id and count are private data;
    // harry.count =1;

    return 0;
}