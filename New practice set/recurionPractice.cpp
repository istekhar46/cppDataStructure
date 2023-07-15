#include <iostream>
using namespace std;

int getFact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * getFact(n - 1);
    }
}

void getCount(int n)
{
    if (n == 0)
        return;
    else
    {
        getCount(n - 1);
        cout << n << endl;
    }
}

int fibb(int n)
{
    int t1 = 0;
    int t2 = 1;
    int s, i;

    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            s = t1 + t2;
            t1 = t2;
            t2 = s;
            cout << s << " ";
        }
        return s;
    }
}

int fibRec(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibRec(n - 1) + fibRec(n - 2);
    }
}


// int power(int n , int m){
//     if(m==0){
//         return 1;
//     }
//     else{
//          return n*power(n,m-1);
//     }
// }
int power(int n , int m){
    if(m==0){
        return 1;
    }
    else{
        int s = 1;

        for(int i=1;i<=m;i++){
            s=s*n;
        }
        return s;
    }
}

int main()
{
    // int res = getFact(4);
    // cout << res;

    // // getCount(5);
    // fibb(8);

    // cout << endl;
    // cout << fibRec(8) << " ";

    int res = power(2,5);
    cout<<res;
    return 0;
}