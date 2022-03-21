#include <iostream>
using namespace std;


bool sorted(int a[], int n)
{
    if(n == 1)
    {
        return true;
    }
    int rest = sorted(a+1, n - 1);
    cout << "a[0] : " << a[0] << "  a[1] : " << a[1] << endl;
    if(rest && a[0] < a[1])
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    cout << sorted(arr, 5) << endl;

    return 0;
}
