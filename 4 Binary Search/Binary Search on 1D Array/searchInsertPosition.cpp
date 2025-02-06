#include <bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int> &arr, int x)
{
    sort(arr.begin(), arr.end());
    int n = arr.size(), low = 0, high = n - 1, ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
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
    cout << "Enter " << n << " elements for insertion: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << "Enter the value to be inserted: ";
    cin >> x;

    int result = searchInsertPosition(arr, x);
    cout << "The insert position for " << x << " at index: " << result << endl;
    // Insert the value at the correct position
    arr.insert(arr.begin() + result, x);

    // Display the array after insertion
    cout << "Array after insertion: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    userInput();
    return 0;
}