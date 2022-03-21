/*
Enter a string and print it in reverse order by recursion.
*/

#include <iostream>
#include <string>
using namespace std;

void reverseString(string s)
{
    if(s.length() == 0) //base case
    {
        return;
    }
    string ss = s.substr(1); //every time deleting first char from string
    reverseString(ss);
    cout << s[0];
}

void reverse(string s, int l)
{
    if(l < 0)
    {
        return;
    }
    cout << s[l];
    reverse(s, l-1);

}
int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;
    cout << "Using substr : " << endl;
    reverseString(s);
    cout << "\nWithout substr : " << endl;
    int l = s.length();
    reverse(s, l-1);
}
