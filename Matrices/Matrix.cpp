#include <iostream>
using namespace std;
struct Matrix
{
    int A[10];
    int n;
};

void set(struct Matrix *arr, int i, int j, int x)
{
    if (i == j)
        arr->A[i - 1] = x;
}

int get(struct Matrix arr, int i, int j)
{
    if (i == j)
        return arr.A[i - 1];
    else
        return 0;
}

void Display(struct Matrix arr)
{
    int i, j;
    for (i = 1; i <= arr.n; i++)
    {
        for (j = 1; j <= arr.n; j++)
        {
            if (i == j)
                cout << arr.A[i - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{

    Matrix arr;
    arr.n = 4;

    set(&arr, 1, 1, 5);
    set(&arr, 2, 2, 4);
    set(&arr, 3, 3, 9);
    set(&arr, 4, 4, 6);

    Display(arr);

    return 0;
}