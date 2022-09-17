// here in arrays marks[]={23,34,445,68}; (we dont use &marks[]) (we only use marks) for address
// if int*p = marks and we increment p with +1 then it will to next index starting from 0 index
// so dereferencing *(p+1) will give 34;(at index 1)
// so dereferencing *(p+2) again will give 445;(at index 2)
// so dereferencing *(p+3) again will give 68;(at index 3)
// newpointer(p+i) = (typecast)(currentpointer(p)+(i*sizeof(datatype)))
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int marks[] = {3, 34, 43, 45};
    // pointers and arrays
    int *ptr = marks;
    cout << "the value of marks[0] *ptr is: " << *ptr << endl;
    cout << "the value of marks[1] *(ptr + 1) is: " << *(ptr + 1) << endl;
    cout << "the value of marks[2] *(ptr + 2) is: " << *(ptr + 2) << endl;
    cout << "the value of marks[3] *(ptr + 3) is: " << *(ptr + 3) << endl;

    return 0;
}
