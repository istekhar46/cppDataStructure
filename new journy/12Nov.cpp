#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void decimalToBinary(int n)
{
    // Base case
    if (n == 0)
        return;

    decimalToBinary(n / 2);
    cout << n % 2 << " ";
}

int main()
{
    int n = 97;
    int k = 9;
    float l = 1.9; 
    double res = n/((double)k);
    cout<<res<<" : res "<<l<<endl;
    char a = n;
    cout<<a<<endl;
    int decimal = 0;
    int j = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimal = bit * pow(2, j) + decimal;
        n = n / 10;
        j++;
    }

    cout << "decimal : " << decimal;

    vector<int> arr;
    int binay = 0;
    int i = 0;
    while (n > 0)
    {
        int remainder = n % 2;
        binay = remainder * pow(10, i) + binay;
        arr.push_back(remainder);
        n = n / 2;
        i++;
    }

    // reverse(arr.begin(), arr.end());
    for (int i = 0, j = arr.size() - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }

    for (auto r : arr)
    {
        cout << r << "";
    }
    cout << endl;
    cout << binay << endl;
    int m = 1 * pow(10, 3) + 101;
    cout << m;

    return 0;
}