#include <iostream>
using namespace std;
int fib(int n)
{
    int t0 = 0, t1 = 1, i, s;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }
}
int fibrec(int n)
{
    if (n <= 1)
        return n;
    return fibrec(n - 2) + fibrec(n - 1);
}





int main()
{
    int j = fibrec(7);
    cout << j << endl;
    int k = fib(7);
    cout << k << endl;
    cout << "End of the program " << endl;
 

    return 0;
}