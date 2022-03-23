#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s, int start, int end)
{
    if(start >= end) //base case
    {
        return true;
    }
    if(s[start] != s[end])
    {
        return false;
    }
    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s = "XYXYX";

    int start = 0, end = s.length() - 1;
    if(isPalindrome(s, start, end))
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "Not palindrome\n";
    }
}
