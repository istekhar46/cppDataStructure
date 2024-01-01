#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
                swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    vector<int> arr = {
        1,
        3,
        44,
        33,
        5,
        -6,
        -7,
    };
    // bubbleSort(arr);
    selectionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }

    return 0;
}