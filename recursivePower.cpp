// calculate n raised to power p;
// 2^3 = 8

#include <iostream>
using namespace std;

int recursivePower(int n, int p)
{
    if(p == 0)
    {
        return 1;
    }
    int prevPower = recursivePower(n, p-1);
    return n * prevPower;
}

int main()
{
    int num, power;
    cout << "Enter number and power: ";
    cin >> num >> power;
    cout << endl;

    cout << "power of (" << num  <<"," << power << ") is : "<< recursivePower(num, power) << endl;
}
