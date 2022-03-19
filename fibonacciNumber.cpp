/*
--->> print the nth Fibonacci number
Fibonacci number sequence is 0,1,1,2,3,5,8,13 and so on

fib(4) = 3
fib(4) = fib(3) + fib(2) = 2 + 1 = 3
fib(3) = fib(2) + fib(1) = 1 + 1 = 2
fib(2) = fib(1) + fib(0) = 1 + 0 = 1

when n == 1 return 1 and when n == 0 return 0 that's our base case.


*/
#include <iostream>
using namespace std;

int fib(int n)
{
    if(n == 0 || n == 1) // base case
    {
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << endl;

    cout << "Fibonacci(" << num << ") is : " << fib(num) << endl;
}
