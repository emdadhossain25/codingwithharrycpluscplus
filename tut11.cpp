#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i == 2)
        {
            break; // break out of the loop don execute further iteration (break for i==2)
        }

        if (i == 1)
        {
            continue; // skip below statements for this iteration (will skip for i==1)
        }
        // here this break and continue will only print for value of 0
        cout << i << endl;
    }

    return 0;
}