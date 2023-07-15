#include <iostream>
using namespace std;

class LowerTri
{
    int *A;

    int n;

public:
    LowerTri()
    {
        A = new int[2 * (2 + 1) / 2];

        n = 2;
    }

    LowerTri(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTri()
    {
        delete[] A;
    }
    void Setdata(int i, int j, int x);
    int Getdata(int i, int j);
    void Display();
};

void LowerTri ::Setdata(int i, int j, int x)
{
    if (i >= j)
        A[i * (i - 1) / 2 + j - 1] = x;
}

int LowerTri ::Getdata(int i, int j)
{
    if (i >= j)
        return A[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}

void LowerTri ::Display()
{
    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[i * (i - 1) / 2 + j - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

class Digonal
{
    int *A;
    int size;
    int n;

public:
    Digonal()
    {
        A = new int[10];
        size = 10;
        n = 0;
    }

    Digonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~Digonal()
    {
        delete[] A;
    }
    void Setdata(int i, int j, int x);
    int Getdata(int i, int j);
    void Display();
};

void Digonal ::Setdata(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x;
}

int Digonal ::Getdata(int i, int j)
{
    if (i == j)
        return A[i - 1];
    else
        return 0;
}

void Digonal::Display()
{
    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
                cout << A[i - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

int main()
{
    Digonal arr(5);
    arr.Setdata(1, 1, 51);
    arr.Setdata(2, 2, 88);
    arr.Setdata(3, 3, 92);
    arr.Setdata(4, 4, 41);
    arr.Setdata(5, 5, 17);
    cout << "The element is " << arr.Getdata(2, 2) << endl;
    arr.Display();

    int n;
    cout << "Enter the Dimension " << endl;
    cin >> n;

    
    
    Digonal arr1(n);

    cout << "Enter the all Element" << endl;
    int x;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            arr1.Setdata(i, j, x);
        }
    }
    arr1.Display();

    cout << "\n\n";

    return 0;
}