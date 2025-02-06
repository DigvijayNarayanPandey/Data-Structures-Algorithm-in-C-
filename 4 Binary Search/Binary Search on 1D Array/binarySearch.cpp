#include <bits/stdc++.h>
using namespace std;

int search(int *arr, int target, int n)
{
    sort(arr, arr + n);
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void userInput()
{
    int n;
    cout << "Enter the Size of the array: ";
    cin >> n;
    int *arr = new int[n];

    // Random number generation
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    cout << n << " Randomly generated array: ";
    for (int i = 0; i < n; ++i)
    {
        arr[i] = dis(gen);
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array before searching
    sort(arr, arr + n);

    int x;
    cout << "Enter target element to be searched: ";
    cin >> x;

    int result = search(arr, x, n);
    if (result != -1)
        cout << "The element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    delete[] arr;
}

int main()
{
    userInput();
    return 0;
}