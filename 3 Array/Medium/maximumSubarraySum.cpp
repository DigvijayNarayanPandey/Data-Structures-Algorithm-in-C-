#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySum(vector<int> array, int n)
{
    long long sum = 0, maxi = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
        if (sum > maxi)
            maxi = sum;
        if (sum <= 0)
            sum = 0;
    }
    return maxi;
}

void userInput()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> array(n);
    cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Maximum Subarray Sum is: " << maximumSubarraySum(array, n);
}

int main()
{
    userInput();
    return 0;
}