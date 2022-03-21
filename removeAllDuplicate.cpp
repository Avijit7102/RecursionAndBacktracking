#include <iostream>
#include <string>

using namespace std;

void removeDuplicate(string s)
{
    if(s.length() == 0)
    {
        return;
    }
    if(s[0] == s[1])
    {
        removeDuplicate(s.substr(1));
    }
    else
    {
        cout << s[0];
        removeDuplicate(s.substr(1));
    }
}
int main()
{
    removeDuplicate("aaaabbbeeecdddd");
    return 0;
}
