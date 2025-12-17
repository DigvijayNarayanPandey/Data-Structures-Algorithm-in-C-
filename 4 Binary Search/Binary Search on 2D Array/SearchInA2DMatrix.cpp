// You have been given a sorted 2D matrix and a target element and you have to find the

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    pair<int, int> searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0, high = n * m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int row = mid / m, col = mid % m;
            if (matrix[row][col] == target)
            {
                return {row, col};
            }
            else if (matrix[row][col] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return {-1, -1};
    }
    void userInput()
    {
        int n, m, target;
        cout << "Enter number of rows and columns: ";
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> matrix[i][j];
            }
        }
        cout << "Enter target: ";
        cin >> target;
        pair<int, int> idx = searchMatrix(matrix, target);
        if (idx.first != -1)
            cout << "Target found at index: (" << idx.first << ", " << idx.second << ")\n";
        else
            cout << "Target not found in matrix.\n";
    }
};

int main()
{
    solution sol;
    sol.userInput();
    return 0;
}