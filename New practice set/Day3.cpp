#include <iostream>
using namespace std;

int main()
{
    char ch = 7;
    cout << ch << endl;

    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
        i++;
    }
    cout << sum << endl;

    //! 1 to N check prime no..
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < n; j++)
        {
            if (i == j)
            {
                j++;
            }
            if (i % j == 0)
                isPrime = false;
            break;
        }

        if (isPrime)
            cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i<<" ";
        }
        cout << endl;
    }

    return 0;
}