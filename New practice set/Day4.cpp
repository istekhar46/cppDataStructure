#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    int count = 0;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            count = count + 1;
            cout << count << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    int count2 = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count2++;
            cout << count2 << " ";
        }
        count2--;
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    char c = 65;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << c << " ";
        }
        cout << endl;
        c++;
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            char ch = 'A' + j - 1;

            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
    int count3 = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            char ch = 'A';
            ch = ch + count3;
            count3++;
            cout << ch << " ";
        }
        count3--;
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= 4; i++)
    {
        char ch = 'A' + 4 - i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << k + i - 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }

        int count = i - 1;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " " << count;
            count--;
        }
        // while (count)
        // {
        //     cout << " " << count;
        //     count--;
        // }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << " " << k;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " *";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " *";
        }
        int count = n - i + 1;
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << " " << count;
            count--;
        }

        cout << endl;
    }

    cout << "\nDabangg pattern printed  !! \n\n";

    int rows = n;

    int num = 1;
    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {

                cout << num << " ";
                num++;
            }
        }
        else if (i % 2 == 0)
        {

            int k = num - 1;
            int j = 1;
            while (j <= i)
            {
                k++;
                j++;
            }
            for (int j = 1; j <= i; j++)
            {

                cout << k << " ";
                k--;
                num++;

            }
        }
        cout << endl;
    }

    return 0;
}