#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n, 0), col(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i] || col[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
        return matrix;
    }

    void userInput()
    {
        int n, m;
        cout << "Enter the row and coloumn of the matrix: ";
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        matrix = setZeroes(matrix);

        cout << "Matrix set to Zero:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution solution;
    solution.userInput();
    return 0;
}