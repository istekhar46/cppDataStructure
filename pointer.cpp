#include <iostream>
using namespace std;
int *func(int size)
{
    int *p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
        cout<<p[i]<<endl;
    }
    return p;
}

int main()
{
    int *ptr;
    int sz = 5;
    ptr = func(sz);
    for (int i = 0; i < sz; i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}