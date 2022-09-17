#include <iostream>
using namespace std;

int main()
{
    /*Loops in C++
    There are 3 types of loops in C++
    1. For Loop
    2. While Loop
    3. Do While Loop.
    */
    // Syntax of For loop
    // for(initialization; condition;updation){
    //     for body(c++);
    // }

    /*For Loop in C++*/
    cout << "For Loop" << endl;
    for (int i = 10; i; i--)
    {
        cout << "Value of i is: " << i << endl;
    }
    cout << endl;

    /*While loop in C++*/
    cout << "While Loop" << endl;
    int a = 10;
    // Syntax of While loop
    // While(condition){
    // statements;
    // }
    // }
    while (a)
    {
        cout << "Value of a is: " << a << endl;
        a--;
    }
    cout << endl;

    /*Do-While loop in C++*/
    cout << "Do-While Loop" << endl;
    // Syntax of DO-While loop
    // do{
    //  statements;
    // }while(condition)
    int j = 0;
    do
    {
        cout << "Value of j is: " << j << endl;
        j--;
    } while (j > 0);

    return 0;
}