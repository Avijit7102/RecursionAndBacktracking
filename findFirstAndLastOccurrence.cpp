/* find the first and last occurrence of a number in an array.
target number will be given.
let array = {4,2,1,2,5,2,7} and we have to find the occurrence for 2.
so first index will be 1 and last index will be 5

*/


#include <iostream>
using namespace std;

int firstOcc(int a[], int n, int i, int target) // here a is array, n = size of array, i is index, and target
{
    if(n == 0)
    {
        return -1;
    }
    if(a[i] == target)
    {
        return i;
    }
    return firstOcc(a, n - 1, i + 1, target);

}

int lastOcc(int a[], int n, int i, int target) // here a is array, n = size of array, i is index, and target
{
    if(i == n) // base case
    {
        return -1;
    }
    int restArray = lastOcc(a, n, i + 1, target);

    if(restArray != -1)
    {
        return restArray;
    }

    if(a[i] == target)
    {
        return i;
    }
    return -1;

}

int main()
{
    int arr[] = {4,2,1,2,5,2,7};
    cout << firstOcc(arr, 7, 0, 2) << endl;
    cout << lastOcc(arr, 7, 0, 2) << endl;
}

