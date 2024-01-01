#include <iostream>
#include <math.h>
using namespace std;

int DecimalToBinary(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n % 2;

        ans = (bit * pow(10, i)) + ans;
        n = n / 2; 
        i++;
    }
    cout << ans << endl;
    return 0;
}

int main()
{

    //?  decimal to binary

    int n;
    cout << "Enter a number: ";
    cin >> n;

    DecimalToBinary(n);

    
    return 0;
}