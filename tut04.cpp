#include <iostream>
using namespace std;

int glo = 6;
void sum()
{
    int a = 6;
    cout << glo << endl;
}
int main()
{
    int glo = 9; // precedence given to local variable
    glo = 78;
    // int a=4;
    // int b=5;
    int a = 24, b = 35;
    float pi = 3.14;
    char c = 'u';
    bool isTrue = false;
    cout << "This is tutorial 04" << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of pie is " << pi << endl;
    cout << "The value of c is " << c << endl;
    sum();                                         // global glo
    cout << "The value of glo is " << glo << endl; // local glo
    cout<<"the boolean is "<<isTrue<<endl;
    return 0;
}