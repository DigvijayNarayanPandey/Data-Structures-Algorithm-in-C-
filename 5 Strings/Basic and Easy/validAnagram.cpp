#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    // bool validAnagram(string s, string t)
    // {
    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());
    //     return s == t;
    // }

    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'a']++;
        }
        for (char c : t) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0)
                return false;
        }
        return true;
    }
};

void UserInput()
{
    solution sol;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    bool result = sol.isAnagram(s, t);

    if (result)
        cout << " '" << t << "' is an anagram of '" << s << "'." << endl;
    else
        cout << " '" << t << "' is NOT an anagram of '" << s << "'." << endl;
}

int main()
{
    UserInput();
    return 0;
}