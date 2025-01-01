#include <iostream>
#include <vector>
using namespace std;

int remove_duplicates(vector<int>& arr)
{
    int n = arr.size(), i = 0, j;
    for (j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements(sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int new_size = remove_duplicates(arr);
    cout << "After removing duplicates: ";
    for (int i = 0; i < new_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size of the array after removing duplicates: " << new_size << endl;

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int remove_duplicates(vector<int>& arr) {
//         int n = arr.size(), i = 0;
//         for (int j = 1; j < n; j++) {
//             if (arr[i] != arr[j]) {
//                 arr[i + 1] = arr[j];
//                 i++;
//             }
//         }
//         return i + 1;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter " << n << " elements (sorted): ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     Solution solution; // Create an instance of the Solution class
//     int new_size = solution.remove_duplicates(arr);

//     cout << "After removing duplicates: ";
//     for (int i = 0; i < new_size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Size of the array after removing duplicates: " << new_size << endl;

//     return 0;
// }



