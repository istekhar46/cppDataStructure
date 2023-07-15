#include <iostream>
using namespace std;
template<class T>
class Array
{
private:
    T *A;
    int length;
    int size;

public:
    Array()
    {
        A = new T[10];
        length = 0;
        size = 10;
    }
    Array(int sz)
    {
        size = sz;
        A = new T[size];
        length = 0;
    }
    ~Array()
    {
        delete[] A;
    }

    void Display();
    void Insert(int index, T x);
    int Delete(int index);
};
template<class T>
void Array <T>::Display()
{
    for (int i = 0; i < length ; i++)
        cout << A[i] << " ";
        cout<<endl;
}
template<class T>
void Array <T>::Insert(int index,T x)
{
    int i;
    if (index >= 0 && index <= length)
    {
        for (i = length - 1; i >= index; i--)
            A[i + 1] = A[i];

        A[index] = x;
        length++;
    }
}
template<class T>
int Array <T> ::Delete(int index)
{
    int i;
    int x=0;
    if (index >= 0 && index < length)
    {
        x = A[index];
        for (i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
    }
    return x;
}

int main()
{
    Array <int>arr(10);

    arr.Insert(0, 10);
    arr.Insert(1, 20);
    arr.Insert(2, 30);
    arr.Display();
    cout<<"Deleted element is "<<arr.Delete(1)<<endl;
    arr.Display();

    return 0;
}