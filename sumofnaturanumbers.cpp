// #include<iostream>
// using namespace std;
// int sumofnatural(int n){
//    if (n==0){
//     return 0;
//    }
//    else{
//     return sumofnatural(n-1)+n;
//    }
// }
// int main(){

//    int x= sumofnatural(4);
//    cout<<x<<" ";
//     return 0;
// }
#include <iostream>
using namespace std;
int sum(int n)
{
    // if (n == 0 && n == 1)
    // {
    //     return 1;
    // }
    // else
    // {
        int i;
        int s = 0;
        for (i = 1; i <= n; i++)
            s = s + i;
        return s;
    // }
}
int main()
{
    int r;
    r = sum(10);
    cout << r << endl;
    ;

    return 0;
}