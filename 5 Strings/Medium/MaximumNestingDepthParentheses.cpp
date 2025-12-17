#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int maxDepth(string s)
    {
        int current = 0, maxDepth = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                current += 1;
                if (current > maxDepth)
                {
                    maxDepth = current;
                }
            }
            else
            {
                if (c == ')')
                {
                    current -= 1;
                }
            }
        }
        return maxDepth;
    }
};

void userInput()
{
    solution sol;
    string s;
    cout << "Enter a string containing '(' and ')' to count the maximum depth: ";
    cin >> s;

    int depth = sol.maxDepth(s);
    cout << "Maximum depth of nested parentheses is: " << depth << endl;
}

int main()
{
    userInput();
    return 0;
}