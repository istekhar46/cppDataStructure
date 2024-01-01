#include <iostream>
#include <string.h>
using namespace std;

int pelin(char *str)
{

    char check[5];
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; j++, i--)
    {
        check[j] = str[i];
    }

    check[j] = '\0';

    for (i = 0, j = 0; str[i] != 0 && check[j] != 0; i++, j++)
    {
        if (str[i] != check[i])
            return 0;
        else
            return 1;
    }
}

void goop(int x[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d ", x[i]);
        i++;
    }
}

class A
{

public:
    static int s;
    int a = 0;
    A()
    {
        a = 10;
    };

    int inc()
    {
        return ++s += 100;
    }
    void display()
    {
        int x = inc();
        // cout <<"increamented "+ x << endl;
    }
};

void test_n(int n)
{
    printf("%d", n);
    if (n > 0)
    {
        test_n(n - 2);
    }
}

int A::s = 0;


int main()
{

    test_n(4);
    cout<<endl;
    
    char string[8]= "abcdefg";
     *string;

     cout<<string+3<<endl;
  
    printf("%s",string);
    // int i = 1;
    // int k = 2;
    // int *p1;
    // int *p2;
    // p1 = &i;
    // p2 = &k;
    // p1 = p2;
    // *p1 = 3;
    // *p2 = 4;
    // cout << k;
    // A a1, a22;
    // a1.a = 10;
    // cout << a1.a << endl;
    // a1.display();
    // cout << a22.s<< endl;

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    // int a = 10;
    // cout <<"    size of int" + sizeof(a)<<endl;

    /*
    int i = 0;
    int j = 0;
    char s1[] = {'i', 's', 't', 'e', 'k', 'h', 'a', 'r', '\0'};

    for (i; s1[i] != '\0'; i++)
    {
        cout << i<<endl;
        for (j; s1[j] != '\0'; j++)
        {
            cout << s1[j];

        }
        cout<<endl;
            j = 0;
    }
*/

    // char s2[] = "naman";

    //     char s3[] = "nama";

    //     int p = pelin(s3);
    //     cout << p << endl;
    //     if (p == 0)
    //         cout << "false";
    //     else
    //         cout << "true";

    // char s[] = "abcdef";
    // char s1[] = {'a', 'b', '\0'};
    // *s1 = 'c';
    // cout << s1 << endl;
    // cout << *s1 << endl;
    // int n[] = {1, 2, 4, 5};
    // *s = '/';
    // char *ptr = &s[0];
    // int *np = &n[0];
    // cout << ptr << endl;
    // cout << *np << endl;

    //   printf("%s",s);cout<<endl;
    //   printf("%s",s+3);
    //  int s1[] = {1,2,3,4,5,6,7,8,9,10};

    //  cout<< endl;

    //   cout<< sizeof(s1)<<endl;

    //   for(int i = 0; i < sizeof(s1)/ sizeof(s1[0]); i++){
    //     cout<< s1[i]<<endl;
    //   }

    // int I = 0; // Initialize I to 0

    // for (;;)
    // {
    //     printf("%d ", I++); // Print the current value of I and then increment it

    //     if (I > 10)
    //         break; // Exit the loop when I becomes greater than 10
    // }

    // int x[] = {1, 20, 30, 40, 50, 60, 70, 8, 90, 100};

    // goop(x, 10);

    // int a = 3, b = 17;

    // a = b % a;
    // printf("%d", a,"\n");

    // b = ++a + 5;
    // printf("%d", a,"\n");
    // printf("%d" , b),"\n";

    return 0;
}
