#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class C2;
class C1
{
    int val1;
    friend void exchange(C1 &,C2 &);

public:
    void intData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class C2
{
    int val2;

public:
    void intData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
    friend void exchange(C1 &,C2 &);
};

void exchange(C1 &x, C2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    C1 oc1;
    C2 oc2;
    oc1.intData(34);
    oc2.intData(67);
    exchange(oc1, oc2);
    cout << "The value after exchanging becomes ";
    oc1.display();
    cout << "The value after exchanging becomes ";
    oc2.display();
    return 0;
}