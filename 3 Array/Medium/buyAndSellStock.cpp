#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices) {
    int n = prices.size();
    int mini = prices[0], maxProfit = 0;
    for (int i = 0; i < n; i++) {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

void userInput() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Size entered: " << n << endl; // Debug statement
    vector<int> array(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        cout << "Element " << i + 1 << ": " << array[i] << endl; // Debug statement
    }
    cout << "All elements entered." << endl; // Debug statement
    cout << "Maximum Profit is: " << maximumProfit(array) << endl;
}

int main() {
    userInput();
    return 0;
}

