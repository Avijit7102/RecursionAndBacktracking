#include <iostream>
using namespace std;

void ascendingPrint(int n)
{
    if(n == 0)
    {
        return;
    }
    ascendingPrint(n - 1);
    cout << n << endl;
}

void descendingPrint(int n)
{
    cout << n << endl;
    if(n == 1)
    {
        return;
    }
    descendingPrint(n - 1);
}
int main()
{
    int num;
    cout << "ascending order: " << endl;
    ascendingPrint(5);
    cout << "descending order : " << endl;
    descendingPrint(5);
}
