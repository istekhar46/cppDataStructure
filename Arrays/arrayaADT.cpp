#include <iostream>
#include <stdio.h>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    cout << "\nElements are\n";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

int main()
{

    struct Array arr;
    
        cout << "Enter the size of the array " << endl;
        cin >> arr.size;
        arr.A = new int[arr.size];
        arr.length = 0;
   

    int n, i;
    cout << "Enter the elements to insert " << endl;
    cin >> n;
    arr.length = n;
    cout << "Enter the elements now" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    display(arr);

    return 0;
}