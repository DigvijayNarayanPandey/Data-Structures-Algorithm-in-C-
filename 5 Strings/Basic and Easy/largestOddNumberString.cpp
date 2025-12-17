#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {
        int n = num.length();
        for (int i = n - 1; i >= 0; i--)
        {
            if ((num[i] - '0') % 2 != 0)
                return num.substr(0, i + 1);
        }
        return "";
    }
};

void userInput()
{
    Solution sol;
    string num;
    cout << "Enter a numeric string: ";
    cin >> num;

    string result = sol.largestOddNumber(num);

    if (result.empty())
        cout << "No odd number can be formed from the given string." << endl;
    else
        cout << "Largest odd number from the string: " << result << endl;
}

int main()
{
    userInput();
    return 0;
}