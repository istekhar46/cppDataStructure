#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to rotate the matrix by 90 degrees clockwise
vector<vector<int>> rotate(vector<vector<int>> &arr, int r, int c)
{
    // Step 1: Transpose the matrix
    vector<vector<int>> transpose(c, vector<int>(r));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = arr[i][j]; // Transposing
        }
    }

    // Step 2: Reverse each row of the transposed matrix to rotate 90 degrees
    for (int i = 0; i < c; i++)
    {
        reverse(transpose[i].begin(), transpose[i].end()); // Reversing rows
    }

    return transpose;
}

int main()
{
    // Initialize a 2x3 matrix
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Rotate the matrix 90 degrees clockwise
    vector<vector<int>> rotated = rotate(arr, 3, 3);

    // Print the rotated matrix (3x2 matrix after 90 degree rotation)
    for (int i = 0; i < rotated.size(); i++)
    {
        for (int j = 0; j < rotated[i].size(); j++)
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
