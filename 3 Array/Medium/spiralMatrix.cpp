#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &mat)
{
  int n = mat.size();          // Number of rows
  int m = mat[0].size();       // Number of columns
  int left = 0, right = m - 1; // Column boundaries
  int top = 0, bottom = n - 1; // Row boundaries
  vector<int> ans;

  while (top <= bottom && left <= right)
  {
    // Traverse from left to right along the top row
    for (int i = left; i <= right; i++)
    {
      ans.push_back(mat[top][i]);
    }
    top++;
    // Traverse from top to bottom along the right column
    for (int i = top; i <= bottom; i++)
    {
      ans.push_back(mat[i][right]);
    }
    right--;
    // Traverse from right to left along the bottom row (if still valid)
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
      {
        ans.push_back(mat[bottom][i]);
      }
      bottom--;
    }
    // Traverse from bottom to top along the left column (if still valid)
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        ans.push_back(mat[i][left]);
      }
      left++;
    }
  }
  return ans;
}
void userInput()
{
  int n, m;
  cout << "Enter the size of the matrix (n x m): ";
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
  vector<int> result = spiralMatrix(matrix);
  cout << "The rotated/spiral matrix is: ";
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  cout << endl;
}
int main()
{
  userInput();
  return 0;
}