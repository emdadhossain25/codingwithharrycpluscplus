#include <iostream>
#include <bits/stdc++.h>
using namespace std;



/**
 * @brief not able to change the parameters inside the function 
 * for e.g. to determine the length of a string we pass as const parameter
 * 
 * @param p 
 * @return int 
 */
// int strlengta(const char *p);

/**
 * @brief when not to use inline function
 * 1. whenever there is use of recursion should not be any inline function
 * 2. whenever using static variables should not use inline functions;
 *
 * @return int
 */

// make a function only when there is minimal or no code to be executed if function is bigger then there will be memory ran out issue while compiling codes

inline int product(int, int);

/**
 * @brief tips for using default arguments
 * 1. always use default variables starting in the second or later arguments
 * 2. default variables can not in the first positions
 * @param currentMoney 
 * @param factor 
 * @return float 
 */
float moneyRecieved(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    // lets call the product function 10 times(which takes time to return the value from product to main )
    cout << "The product of a and b are: " << product(a, b) << endl<<endl;


    int money = 100000;

    cout << "If you have " << money << " Rs in your bank account, then you will receive " << moneyRecieved(money) << " Rs after 1 year" << endl<<endl;
    
    cout << "For VIP: If you have " << money << " Rs in your bank account, then you will receive " << moneyRecieved(money, 1.10) << " Rs after 1 year" << endl<<endl;
    return 0;
}

// inline function makes the return of a*b inside main instead of calling this function in compile time which reduces cost of making function calls instead it changes function calls to function code

inline int product(int a, int b)
{
    // below lines are not recommended when using inline functions
    // what is static--> static variable is initialized once and retained value for further use
    // static int c = 0;
    // c = c + 1;
    return a * b;
};

