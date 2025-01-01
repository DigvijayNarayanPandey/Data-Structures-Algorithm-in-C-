#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Solution
{
    public:
    void onePlaceRotate(vector<int> &arr, int n)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++){
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d;
    cout << "Enter the no. of places to rotate: ";
    cin >> d;

    d = d % n; // To handle cases where d > n
    auto start = high_resolution_clock::now();  // Start timing
    for (int i = 0; i < d; i++) {
        sol.onePlaceRotate(arr, n);
    }
    auto end = high_resolution_clock::now();    // End timing
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Array after " << d << " rotations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    
    cout << "Number of rotations performed: " << d % n << endl;
    cout << "Time taken to execute the program: " << duration.count() << " microseconds" << endl;

    return 0;
}