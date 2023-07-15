#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};
void Diaplay(struct Array a)
{
    for (int i = 0; i < a.length; i++)
        cout << a.A[i] << " ";
}

// Iterative Function ...

int BinarySearch(struct Array arr, int key)
{
    int l = 0;
    int h = arr.length - 1;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key <= arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            return l = mid + 1;
        }
        return -1;
    }
}

// Recursive Function ....

int RBS(int arr[], int l, int h, int key)
{
    int mid;
  
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
            return mid;
        if (key <= arr[mid])
            return RBS(arr, l, mid - 1, key);
        else
            return RBS(arr, mid + 1, h, key);
    }
    return -1;
}
int main()
{
    Array arr = {{3, 4, 5, 8, 11, 25, 28, 40}, 8, 10};
    int a = BinarySearch(arr, 25);
    // int a = RBS(arr.A, 0, arr.length, 40);
    if (a==-1){
        cout<<"\n\n<<Element not Found in the list>> "<<endl<<endl;
    }
    else{
    cout << "\n\nElement is found at index : "<< a << endl<<endl;
    }
    // Diaplay(arr);

    return 0;
}