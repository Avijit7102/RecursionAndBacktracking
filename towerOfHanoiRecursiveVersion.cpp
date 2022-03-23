/*
Rules:

1) Only one disc can be moves at a time.
2) Only the top disc on the rod can be moved to any other rod.
3) A larger disc cannot be placed on a smaller disc.


Algorithm:

step 1: move n-1 disc from source to aux rod
step 2: move nth disc from source to destination rod
step 3: move n-1 disc form aux to destination rod.

*/

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char aux, char destination)
{
    if(n == 1)
    {
        cout << "Move disk " << n << " from rod " << from << " to rod " << destination << endl;
        return;
    }
    towerOfHanoi(n-1, from, destination, aux);
    cout << "Move disk " << n << " from rod " << from << " to rod " << destination << endl;
    towerOfHanoi(n-1, aux, from ,destination);
}
int main()
{
    int n = 3;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
