#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int total = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int current_value = roman[s[i]];
            if (i + 1 < s.length())
            {
                int next_value = roman[s[i + 1]];
                if (current_value < next_value)
                {
                    total = total - current_value;
                }
                else
                {
                    total = total + current_value;
                }
            }
            else
            {
                total = total + current_value;
            }
        }
        return total;
    }
};

void userInput()
{
    solution sol;
    string s;
    cout << "Enter a Roman number to convert it into integer: ";
    cin >> s;
    int result = sol.romanToInt(s);
    cout << "The integer value is: " << result << endl;
}

int main()
{
    userInput();
    return 0;
}