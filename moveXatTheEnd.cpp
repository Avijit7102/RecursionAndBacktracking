// move all x to the end of the given string using recursion

#include <iostream>
#include <string>

using namespace std;

void moveX(string s)
{
    if(s.length() == 0) //base case
    {
        return;
    }
    if(s[0] != 'x')
    {
        cout << s[0];
        moveX(s.substr(1));
    }
    else
    {
        moveX(s.substr(1));
        cout << s[0];
    }
}
int main()
{
    moveX("axxbdxcefxhix");
    return 0;
}
