#include <bits/stdc++.h>
using namespace std;

// Better approch
// void sort012(vector<int> &arr, int n)
// {
//     int count0 = 0, count1 = 0, count2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             count0++;
//         }
//         else if (arr[i] == 1)
//         {
//             count1++;
//         }
//         else if (arr[i] == 2)
//         {
//             count2++;
//         }
//     }
//     for (int i = 0; i < count0; i++)
//         arr[i] = 0;
//     for (int i = count0; i < count0 + count1; i++)
//         arr[i] = 1;
//     for (int i = count0 + count1; i < n; i++)
//         arr[i] = 2;
// }

// Optimal
void sort012(vector<int> &arr, int n)
{
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void userInput()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " sorted elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort012(a, n);
    cout << "The sorted 0's, 1's and 2's are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    userInput();
    return 0;
}