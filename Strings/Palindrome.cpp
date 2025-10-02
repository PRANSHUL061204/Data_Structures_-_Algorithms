#include <iostream>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
        if (s[i++] != s[j--])
            return false;
    return true;
}

int main()
{
    string s;
    cout << "Enter The String: ";
    cin >> s;
    if (isPalindrome(s))
        cout << "\nYes!! The String You Entered is Palindrome";
    else
        cout << "\nThe String You Entered is Not  Palindrome";
}