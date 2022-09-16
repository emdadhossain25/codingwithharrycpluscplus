#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// f(x)=x^2+2;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = sp;
    }

    void getSecretPassword()
    {
        cout << "The secret password is " << this->secretPassword << endl;
    }
    void printDetails()
    {

        cout << "the name of our first employee is: " << this->name << endl;
        cout << "the salary of our first employee is: " << this->salary << endl;
    }

private:
    int secretPassword;
};

class Programmer: public Employee{
    public:
        int errors;
};
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // string harry ="";
    // int a,b,c;
    // short s2349a=9;
    // cout<<s2349a<<endl;
    // cout<<marksInMaths<<endl;

    // cout<<"hello world! emdad"<<endl;
    // cout<<"next line"<<endl;
    // int marksInMaths=83;
    // cout<<"the marks of the student in math is "<<marksInMaths<<endl;
    // int a;
    // long b;
    // short c;
    // long long ll;
    // float const f = 32.45;
    // double d;
    // long double ld;

    // cout << "the size of int is bytes:" << sizeof(a) << endl;
    // cout << "the size of long is bytes :" << sizeof(b) << endl;
    // cout << "the size of short is bytes: " << sizeof(c) << endl;
    // cout << "the size of long long is bytes: " << sizeof(ll) << endl;
    // cout << "the size of float is bytes: " << sizeof(f) << endl;
    // cout << "the size of double is bytes: " << sizeof(d) << endl;
    // cout << "the size of long double is bytes: " << sizeof(ld) << endl;
    // cout << "the value of f is: " << f << " got it?" << endl;

    // int a, b;
    // cout << "enter first number" << endl;
    // cin >> a;
    // cout << "enter second number" << endl;
    // cin >> b;

    // cout << "first number is :" << a << endl;
    // cout << "second number is :" << b << endl;

    // cout << "the sum of a and b is :" << a + b << endl;
    // cout << "the substraction of a and b is :" << a - b << endl;
    // cout << "the multiplication of a and b is :" << a * b << endl;
    // cout << "the division of a and b is :" << (float)a / b << endl;

    // int age;
    // cout << "enter your age:" << endl;
    // cin >> age;
    // if (age > 150 || age<1)
    // {
    //     cout << "invalid age" << endl;
    // }
    // else if (age >= 18)
    // {
    //     cout << "you can vote" << endl;
    // }

    // else
    // {
    //     cout << "you can not vote" << endl;
    // }
    // switch (age)
    // {
    // case 12:
    //     cout << "you are 12 years old" << endl;
    //     break;
    // case 32:
    //     cout << "you are 32 years old" << endl;
    //     break;
    // case 52:
    //     cout << "you are 52 years old" << endl;
    //     break;

    // default:
    //     cout << "you are " << age << " years old" << endl;
    //     break;
    // }
    // while (index<34)
    // {
    //     cout<<"we are at index number: "<<index<<endl;
    //     index++;
    // }

    // do
    // {
    //     cout << "we are at index " << index << endl;
    //     index++;
    // } while (index > 3354);

    // for (int i = 1; i <= 34; i++)
    // {
    //     cout << "The value of i is " << i << endl;
    // }
    // int index = 0;
    // int a, b;
    // cout << "enter the value of a" << endl;
    // cin >> a;
    // cout << "enter the value of b" << endl;
    // cin >> b;
    // cout << "the sum of " << a <<" and "<< b << " is: " << add(a, b) << endl;

    // int arr[]={1,3,6};
    // cout<<arr[1]<<endl;

    // int marks[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter the marks for " << i << " index" << endl;
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "value at " << i << " index is " << marks[i]<< endl;
    // }

    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    //     };

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "value at " << i << "," << j << " is " << arr2d[i][j] << endl;
    //     }
    // }
    // int a =343;
    // int b =87.35;
    // cout<<(float) a/343<<endl;
    // cout<<(int) b<<endl;

    // string name ="emdad";
    // cout<<"the name is "<<name<<endl;
    // cout<<"the name length is "<<name.length()<<endl;
    // cout<<"the name substring is "<<name.substr(0,4)<<endl;

    // int a = 34;
    // int *ptra;
    // ptra = &a;
    // cout << "pointer address from a " << ptra << endl;
    // cout << "pointer address from pointer  " << &a << endl;
    // cout << "the value of a is: " << a << endl;
    // cout << "from pointer the value of a is: " << *ptra << endl; // * here is dereferencing operator which extracts value from a pointer;

    // public-> accessible from outer classes
    // private -> not accessible from outer classes
    // protected -> not accessible from outer classes but accessible from subclasses using inheritance
    Employee emp("emdad constructur", 200, 2341);
    // emp.name = "emdad";
    // emp.salary = 100;
    emp.printDetails();
    emp.getSecretPassword();
    

    return 0;
}
