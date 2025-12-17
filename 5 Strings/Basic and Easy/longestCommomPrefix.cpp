#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        string ans = "";

        for (int i = 0; i < first.size(); i++)
        {
            if (first[i] == last[i])
            {
                ans += first[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};

void userInput()
{
    solution sol;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter " << n << " strings: ";
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    string prefix = sol.longestCommonPrefix(strs);

    if (!prefix.empty())
    {
        cout << "Longest Common Prefix: " << prefix << "\n";
    }
    else
    {
        cout << "No common prefix found.\n";
    }
}

int main()
{
    userInput();
    return 0;
}