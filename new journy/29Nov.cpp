#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int twosComplement(int num)
{
    if (num == 0)
        return 0; // Special case for zero

    int result_mask = 0; // Use a different variable name to avoid shadowing
    while (num > 0)
    {
        result_mask = (result_mask << 1) | 1; // Shift left and add 1
        num = num >> 1;                       // Shift num right
    }
    return result_mask;
}

int deciToBin(int n)
{
    int ans = 0;
    int place = 1; // Tracks the position in the binary number (1, 10, 100, ...)
    while (n > 0)
    {
        int bit = n & 1;    // Get the least significant bit
        ans += bit * place; // Add the bit at the correct position
        n = n >> 1;         // Right shift n to process the next bit
        place *= 10;        // Move to the next binary position
    }
    return ans;
}

void sort(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    { //{0, 1, 1, 0, 0, 1, 1}
        if (arr[i] == 1)
        {
            swap(arr[i], arr[j]);
            j--;
        }
        else
        {
            i++;
        }
    }
}

void pairArr(vector<int> &arr)
{
    int n = arr.size(); // 10,20,30
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << arr[j] << "," << arr[i] << ")" << ",";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {0, 1, 1, 0, 0, 1, 1};
    vector<int> arr3 = {10, 20, 30};
    pairArr(arr3);
    cout<<endl;
    sort(arr);
    for (auto n : arr)
    {
        cout << n << " ";
    }
    cout << endl;

    int n = 4;
    int mask = twosComplement(n);
    cout << mask << endl;
    cout << deciToBin(mask);

    return 0;
}