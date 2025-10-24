#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr)
{
    stack<char> s;

    for (char ch : expr)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty())
                return false;

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return false;
        }
    }

    return s.empty();
}

int main()
{
    string input;
    cout << "Enter expression: ";
    cin >> input;

    if (isBalanced(input))
        cout << "Balanced parentheses." << endl;
    else
        cout << "Unbalanced parentheses." << endl;

    return 0;
}