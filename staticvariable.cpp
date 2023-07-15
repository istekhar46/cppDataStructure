#include <iostream>
using namespace std;
class a1
{
    // static int count ;
    int a;
    int b;

public:
    static int count;

    void setprice(int item, int price)
    {
        a = item;
        b = price;
    }
    void print()
    {
  // cout<<"\n\n"<<endl;
        cout << "item count is " << (count++) + 1 << endl;
        cout << "the item id is " << a << endl;
        cout << "the price is " << b << endl;
    }
};
int a1::count;

int main()
{
    int size;
    int p, q, i;
    cout << "Enter size" << endl;
    cin >> size;
    a1 *ptr = new a1[size];
    a1 *temptr = ptr;

    for (i = 0; i < size; i++)
    {
        cout << "Enter item id " << i + 1 << " and price " << endl;
        cin >> p >> q;
        ptr->setprice(p, q);
        ptr++;
    }
    cout << endl;
    for (i = 0; i < size; i++)
    {

        temptr->print();
        temptr++;
        cout << endl;
    }
    return 0;
}