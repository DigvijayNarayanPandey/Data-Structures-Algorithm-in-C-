#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
void userInput()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> array(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "The length of the longest consecutive sequence is: " << longestSuccessiveElements(array) << endl;
}

int main()
{
    userInput();
    return 0;
}