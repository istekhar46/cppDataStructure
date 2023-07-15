#include <iostream>
#include <stdio.h>
using namespace std;

// Creating Structure for Array ....

struct Array
{
    int *A;
    int length;
    int size;
};

// Swap Function ...

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Display funtion ...

void Display(struct Array arr)
{
    int i;
    cout << "Elements are :" << endl;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

// Element adding at last index in array ...

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

// Inserting Element at Given index ..

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index < arr->size)
    {

        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];

        arr->A[index] = x;

        arr->length++;
    }
}

//  Deletion of Element from the Array ...

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}

//  Linear Search in Array .....

int LinearSearch(struct Array *arr, int x)
{
    int i;
    int y = x;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == y)
        {
            Swap(&arr->A[i], &arr->A[i]);
            return i;
        }
    }
    return -1;
}
// Get opration on list ...

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        int key;
        key = arr.A[index];
        return key;
    }
    return -1;
}

// Set Opration on list .....

void Set(struct Array *arr, int index, int key)
{
    if (index >= 0 && index < arr->size)
        arr->A[index] = key;
}

// Getting Max Element of Array .....

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
        if (arr.A[i] > max)
            max = arr.A[i];

    return max;
}
// Getting Min Element of Array .....

int Min(struct Array arr)
{
    int Min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
        if (arr.A[i] < Min)
            Min = arr.A[i];

    return Min;
}

// Finding the Sum of the Array ....

int Sum(struct Array arr)
{
    int i;
    int total = 0;
    for (i = 0; i < arr.length; i++)
        total = arr.A[i] + total;
    return total;
}
// Finding the Average of the Array ....

float Avg(struct Array arr)
{
    int i;
    float total = 0;
    for (i = 0; i < arr.length; i++)
        total = arr.A[i] + total;
    return (total) / arr.length;
}

// Reversing the array ....

void Reverse(struct Array *arr)
{
    int *b;
    b = new int[arr->length];
    int i, j;
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        b[j] = arr->A[i];

    for (i = 0; i < arr->length; i++)
        arr->A[i] = b[i];
}

// Reverse by Swapping Method ....

void Resverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
        Swap(&arr->A[i], &arr->A[j]);
}

// check if array is shorted ? ....

int isSorted(struct Array arr)
{
    int i = 0;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

// Insert Element at Given index in shorted Array ....

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
    {
        return;
    }

    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }

    arr->A[i + 1] = x;
    arr->length++;
}

//  ReArranging negative and positive Elements in Array ....

void ReArrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            Swap(&arr->A[i], &arr->A[j]);
    }
}

///  Binary oprations of Array ....///

// Array merging .....

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 20;

    return arr3;
}

// Union Opration on the Array....

struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr1->A[i] > arr2->A[j])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = 20;

    return arr3;
}
// Intersection opration on Array .....

struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if (arr1->A[i] > arr2->A[j])
            j++;
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 20;

    return arr3;
}

// Diffrence opration on Array

struct Array *Diffrence(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr1->A[i] > arr2->A[j])
            j++;
        else
        {
            i++;
            j++;
        }
    }

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    arr3->length = k;
    arr3->size = 20;

    return arr3;
}

int main()
{
    // struct Array arr;
    // arr.A=new int [10];
    // arr.length=5;
    // arr.A[0]={10};
    // arr.A[1]={12};
    // arr.A[2]={14};
    // arr.A[3]={16};
    // arr.A[4]={18};

    // Insert(&arr,5,20);
    // Display(arr);

    struct Array arr1;

    int x, index;
    int ch;
    cout << "Enter the size of Array " << endl;
    cin >> arr1.size;
    arr1.length = 0;
    arr1.A = (int *)malloc(arr1.size * sizeof(int));

    do
    {

        cout << "Menu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter an index and Element " << endl;
            // cin >> x >> index;
            scanf("%d%d", &index, &x);
            Insert(&arr1, index, x);
            break;

        case 2:
            cout << "Enter an index  " << endl;
            cin >> index;
            x = Delete(&arr1, index);
            cout << "Deleted " << x << endl;
            break;

        case 3:
            cout << "Enter Element to Search  " << endl;
            cin >> x;
            index = LinearSearch(&arr1, x);
            if (index == -1)
                cout << "Element not Found \n\n"
                     << endl;
            else
                cout << "Element found at index " << index << "\n\n"
                     << endl;
            break;

        case 4:
            x = Sum(arr1);
            cout << "Sum is " << x << endl;
            break;

        case 5:
            Display(arr1);
            cout << endl;
            break;
        }

    } while (ch < 6);

    return 0;
}