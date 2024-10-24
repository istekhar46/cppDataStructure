#include <iostream>
#include <vector>
using namespace std;

void reverse(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    for (int i = 0, j = end; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int uniquue(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    // int a = 10;
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     for (int j = 1; j <= a - i; j++)
    //     {
    //         cout << "   ";
    //     }
    //     for (int j = 1; j <= a - i; j++)
    //     {
    //         cout << "   ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= a - i; j++)
    //     {
    //         cout << "   ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // int b = 'A' + 32;
    // cout << b; cout<<endl;
    // char c = b;
    // cout << c;

    // char arr[] = {'a', 'A', 'Z', 'K'};

    // for (int i = 0; i < 4; i++)
    // {
    //     char A = 'A';
    //     char Z = 'Z';
    //     char ab = 'a';
    //     char z = 'z';
    //     if (arr[i] < 'a' && arr[i] >= 'A' || arr[i] <= 'Z')
    //     {
    //         cout << "upperCase :" << arr[i] << endl;
    //     }
    //     else if (arr[i] >= ab || arr[i] <= z)
    //     {
    //         cout << "lowerCase :" << arr[i] << endl;
    //     }
    // }

    // int n = 10;
    // int mask = 0;

    // while (mask < n)
    // {
    //     mask = mask << 1;
    //     mask = mask + 1;
    // }

    // int complement = n ^ mask;
    // cout << complement << endl;

    // int bitLength = 0;
    // int temp = mask;
    // while (temp > 0)
    // {
    //     temp = temp >> 1;
    //     bitLength++;
    // }

    // for (int i = bitLength - 1; i >= 0; i--)
    // {
    //     int bit = (complement >> i) & 1;
    //     cout << bit << " ";
    // }

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // int n = sizeof(arr) / sizeof(arr[0]);

    // reverse(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int *p;
    // int x = 10;
    // int y = x;
    // p = &x;
    // cout << endl
    //      << *p - 2 << endl<< x << endl<< y << endl;

    int arr[] = {1, 1, 2, 3, 3, 4, 4};

    int unique = uniquue(arr, 7);
    cout << unique;
    cout << endl;
    vector<int> v = {0, 0, 0, 4, 0, 0};
    for (int ele : v)
        cout << ele << " ";
    cout << endl;
    cout << v.at(3);
    return 0;
}