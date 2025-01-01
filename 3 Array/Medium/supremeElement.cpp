#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElement(vector<int> &a)
{
    vector<int> ans;
    int maxi = INT_MIN, n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
            ans.push_back(a[i]);
        maxi = max(maxi, a[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
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

    vector<int> result = superiorElement(array);
    cout << "The Supreme/Leaders are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    userInput();
    return 0;
}
