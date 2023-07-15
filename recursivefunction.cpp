#include <iostream>
using namespace std;
void func(int a)
{
    if (a > 0)
    {
        cout << a << " ";
        func(a - 1);
    }
}
// void func1(int b){
//     if (b>0){
//         func1(b-1);
//         cout<<b<<endl;
//     }

// }
int main()
{

    int x = 5;
    func(x);
    // int y=6;
    // func1(y);

    return 0;
}