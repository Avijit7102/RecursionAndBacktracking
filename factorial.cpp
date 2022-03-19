/*
Factorial of 4! = 4 * 3 * 2 * 1 = 24

4! = 4 * (4 - 1) = 4 * 6 = 24
3! = 3 * (3 - 1) = 3 * 2 = 6
2! = 2 * (2 - 1) = 2 * 1 = 2
1! = 1 * (1 - 1) = 1 * 1 = 1
when n = 0 return 1.

*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int prevFactorial = factorial(n - 1);
    //cout << "prevFactorial is " << prevFactorial << endl;
    return n * prevFactorial;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << endl;
    cout << "factorial of  " << num << " is : " << factorial(num) << endl;
}
