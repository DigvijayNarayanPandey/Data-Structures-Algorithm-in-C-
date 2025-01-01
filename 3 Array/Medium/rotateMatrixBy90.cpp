#include <bits/stdc++.h>
using namespace std;

void rotateMatrixBy90(vector<vector<int>> &matrix) {
    int n = matrix.size();
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void userInput(vector<vector<int>> &matrix) {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    matrix.resize(n, vector<int>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

int main() {
    vector<vector<int>> matrix;
    userInput(matrix);

    rotateMatrixBy90(matrix);

    cout << "Matrix after 90 degree rotation:" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
