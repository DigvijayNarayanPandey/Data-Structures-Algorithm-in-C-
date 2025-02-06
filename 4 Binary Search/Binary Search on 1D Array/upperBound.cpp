#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int n, int x)
{
    sort(arr.begin(), arr.end());
    int ans = n, low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

void userInput()
{
    int n, x;
    cout << "Enter the Size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements for Upper Bound: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << "Enter X: ";
    cin >> x;
    int result = upperBound(arr, n, x);
    cout << "The upper bound index of " << x << " is: " << result << endl;
}

int main()
{
    userInput();
    return 0;
}