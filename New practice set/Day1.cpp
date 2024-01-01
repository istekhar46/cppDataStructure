#include <iostream>
using namespace std;

int sumRec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumRec(n - 1);
    }
}

int sum()
{
    cout << "Enter the number : ";
    int n;
    int num = 1;
    cin >> n;
    int sum = 0;
    while (num <= n)
    {
        sum = sum + num;
        num++;
    }
    return sum;
}

int fact(int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i < 5; i++)
    {
        for (int k = 1; k < 5 - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int k = 1; k < 5 - i; k++)
            cout << "  ";
        for (int k = 1; k <= 5 - i; k++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << sum() << endl;
    cout << fact(3) << endl;
    cout << sumRec(3) << endl;
    return 0;
}