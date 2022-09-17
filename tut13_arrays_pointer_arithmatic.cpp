#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int marks[] = {23, 34, 45, 55};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[2]<<endl;
    cout<<"using for loop"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    cout << "using do-while" << endl;
    // do the same using while and do-while

    int i = 0, j = 0;
    do
    {
        cout << marks[i] << endl;
        i++;

    } while (i < 4);
    cout << "using  while" << endl;

    while (j < 4)
    {
        cout << marks[j] << endl;
        j++;
    }
    cout << endl;

    return 0;
}