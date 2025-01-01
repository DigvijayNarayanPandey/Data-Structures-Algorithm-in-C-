#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedArrayUnion(vector<int> a, vector<int> b)
    {
        int n = a.size();
        int m = b.size();
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            st.insert(b[i]);
        }
        vector<int> temp;
        for (auto it : st)
        {
            temp.push_back(it);
        }
        return temp;
    }

    void userInput()
    {
        int n, m;
        cout << "Enter the size of the first array: ";
        cin >> n;
        vector<int> a(n);  
        cout << "Enter " << n << " sorted elements of the first array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << "Enter the size of the second array: ";
        cin >> m;
        vector<int> b(m);
        cout << "Enter " << m << " sorted elements of the second array: ";
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<int> result = sortedArrayUnion(a, b);
        cout << "The union of the two sorted arrays is: ";
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Solution sol;
    sol.userInput();
    return 0;
}
