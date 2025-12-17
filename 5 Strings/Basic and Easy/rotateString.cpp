#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;
        return (s + s).find(goal) != string::npos;

        return false;
    }
};

void userInput()
{
    solution sol;
    string s, goal;

    cout << "Enter string 1: ";
    cin >> s;

    cout << "Enter string 2: ";
    cin >> goal;

    bool result = sol.rotateString(s, goal);

    if (result)
        cout << "Yes, '" << s << "' can be rotated to become '" << goal << "'." << endl;
    else
        cout << "No, '" << s << "' cannot be rotated to become '" << goal << "'." << endl;
}

int main()
{
    userInput();
    return 0;
}