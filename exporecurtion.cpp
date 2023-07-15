#include <iostream>
#include <cmath>
using namespace std;
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return power(m, n - 1) * m;
    }
}
int power1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int s = 1;
        for (int i = 1; i <= n; i++)
        {
            s = m * s;
        }
        return s;
    }
}
int main()
{
    int a = power(2, 5);
    cout << a << endl;
    int b = power1(2, 5);
    cout << b << endl;
    cout << pow(2, 5);
    return 0;
}