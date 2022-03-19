// Add all numbers till to n
//if input is 4 it will return 10. 1+2+3+4 = 10;


#include <iostream>
using namespace std;

int recursiveSum(int n)
{
    if(n == 0) //base case
    {
        return 0;
    }

    int prevSum = recursiveSum(n - 1);
    return n + prevSum;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << endl;
    cout << "Sum of 1 to " << num << " is : " << recursiveSum(num) << endl;
}
