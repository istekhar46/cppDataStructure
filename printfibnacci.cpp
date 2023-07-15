#include <iostream>
using namespace std;
void printfibnacci(int n)
{
    int i=0, t0 = i, t1 = i+1,  s;
    for (i = 2; i <= n; i++)
    {
        if (n <= 1){
        
            cout << n;
        }
            s = t0 + t1;
            t0 = t1;
            t1 = s;
            cout << s << " ";
        
    }
}
int main()
{
    int terms;
    cout << "Enter the terms you want to print " << endl;
    cin >> terms;
    cout << "0 1 ";
    printfibnacci(terms);
    return 0;
}