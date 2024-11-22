#include <iostream>
using namespace std;

int main()
{
    // int n = 5;
    // int m = n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == j)
    //         {
    //             cout << " " << j << " ";
    //         }
    //         else if (m - j  == 0)
    //         {
    //             cout << " " << m << " ";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout << endl;
    //     m--;
    // }
    
    const int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || j == n - i + 1)
                cout << " " << (i == j ? j : n - i + 1) << " ";
            else
                cout << "   ";
        }
        cout << endl;
    }
    return 0;
}