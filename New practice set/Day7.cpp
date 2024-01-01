#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

void count(int arr[], int size)
{
    int arrCount[2] = {0, 0};
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arrCount[0]++;
        }
        else
        {
            arrCount[1]++;
        }
    }
    cout << "Number of 0's: " << arrCount[0] << endl;
    cout << "Number of 1's: " << arrCount[1] << endl;
}

int *reversArr(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr;
}

int main()
{
    /* int n;
     cin >> n;

     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= n - i + 1; j++)
         {
             if (i == 1 || j == n - i + 1 || j == 1)
             {
                 cout << " *";
             }
             else
             {
                 cout << "  ";
             }
         }
         cout<<endl;
     }


     int arr[10];
     int a=0;
     cout<<"the size of arr is "<<sizeof(arr)<<endl;
     cout<<"the lenth of arr is "<<sizeof(arr)/ sizeof(int)<<endl;
     cout<<"the address of arr is "<<arr<<endl;
     cout<<"the address of arr is "<<&arr<<endl;
     cout<<"the address of a is "<<a<<endl;
     cout<<"the address of a is "<<&a<<endl;

      for(int i = 0; i < 10; i++){
         cin>> arr[i];
      }

      for(int i = 0; i < 10; i++){
         arr[i] = arr[i] * 2;
         cout<<arr[i]<<" ";
      }
      */

    int arr[10] = {1, 2, 34, 34, 65, 36, 72, 68, 89, 10};
    int target = 65;
    int length = sizeof(arr) / sizeof(int);
    bool flag = false;
    int index = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == target)
        {
            flag = true;
            index = i;
            break;
        }
        else
        {
            continue;
        }
    }

    if (flag)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    printArray(arr, length);
    cout << linearSearch(arr, length, target) << endl;

    int binartArray[10] = {0, 1, 0, 0, 1, 0, 1, 0, 1, 0};
    int size = 11;
    count(binartArray, size);

    int *ptr;
    ptr = &size;
    cout<<*ptr<<endl;
    ptr = reversArr(arr, length);
    printArray(ptr, length);
    printArray(arr, length);

    return 0;
}