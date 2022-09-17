// control structures are of mainly 3 types
//  1. sequence control structures (action1, action2, action3 and exit sequentially)
//  2. selection control structures (action1, logical selection(true false), action3 and exit selection)
//  2. loop control structures (action1, loop,iterate, exit condition, action3 and exit loopwise)

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "tell me your age" << endl;
    cin >> age;
    cout << "Your age is " << age << endl;

    // 1. selection control structure if else-if else ladder
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "You can not come to my party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are a kid and you will get a kid pass to the party" << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "You are not yet born" << endl;
    // }

    // else
    // {
    //     cout << "You can come to the party" << endl;
    // }

    // 2. selection control structure switch case statements
    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 2:
        cout << "you are 2" << endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;

    default:
        cout << "No Special Cases" << endl;
        break;
    }

    cout << "done with switch case" << endl;

    return 0;
}