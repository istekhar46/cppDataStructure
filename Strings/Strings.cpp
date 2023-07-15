#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// Funtion for generating permutation of string ...

void Perm(char s[], int k)
{
    static int A[10] = {0};
    static char res[10];

    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';
        cout << res << endl;
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                res[k] = s[i];
                A[i] = 1;
                Perm(s, k + 1);
                A[i] = 0;
            }
        }
    }
}

// Function for checking if string is pelindrom ...

int Palindrom(char *str)
{

    char b[5];
    int i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; j++, i--)
    {
        b[j] = str[i];
    }

    b[j] = '\0';

    for (i = 0, j = 0; str[i] != '\0' && b[j] != '\0'; i++, j++)
        if (str[i] != b[i])
            return 0;
        else
            return 1;
}

// Reversing the string function .....

void Reverse(char *s6)
{
    int i;
    int t;
    int j;

    for (j = 0; s6[j] != '\0'; j++)
    {
    }
    j = j - 1;

    for (i = 0; i < j; i++, j--)
    {
        t = s6[j];
        s6[j] = s6[i];
        s6[i] = t;
    }
}
int valid(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!(str[i] >= 65 && str[i] <= 90) &&
            !(str[i] >= 97 && str[i] <= 122) &&
            !(str[i] >= 48 && str[i] <= 57))

            return 0;
    }
    return 1;
}

int main()
{
    // intialization of sting ...
    char name0[5] = {'j', 'o', 'h', 'n', '\0'};
    char name[] = {'i', 's', 't', 'e', 'k', 'h', 'a', 'r', '\0'};
    char name2[] = "khan";
    cout << name << " ";
    cout << name2 << endl;

    // for taking multiple input string with spaces use getline function ..

    // string name3;
    // cout << "Enter first and last name " << endl;
    // getline(cin, name3);
    // cout << "Your name is " << name3 << endl;

    // finding the length of the string ....

    char s[] = {'i', 's', 't', 'e', 'k', 'h', 'a', 'r', '\0'};
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    cout << "The length of the String is " << i << endl;

    // Changing The cases of string ...
    /* ASCII Codes of ...
                            lower - UPPER
        A = 65    a = 97    97 - 65 = 32
        B = 66    b = 98    98 - 66 = 32
        C = 67    c = 99              .
        .         .                   .
        .         .                   .
        .         .
        Z = 90    z = 122
    */

    char s1[] = "ISTEKHAR";
    cout << "Given string " << s1 << endl;
    for (i = 0; s1[i] != '\0'; i++)
        s1[i] = s1[i] + 32;

    cout << "lower case of given string " << s1 << endl;

    // Toggling the cases (if uppar convert in lower vise versa)...

    // char s2[] = {'w', 'e', 'l', 'C', 'O', 'M', 'E', '\0'}; or ....
    char s2[] = "welCOME";
    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] >= 'A' && s2[i] <= 90)
        {
            s2[i] += 32;
        }
        else if (s2[i] >= 97 && s2[i] <= 120)
        {
            s2[i] = s2[i] - 32;
        }
    }

    cout << "Toggled string is " << s2 << endl;

    // Counting Words in string using spaceses ...

    char s3[] = "how are you doing toda";

    int count = 1;
    for (i = 0; s3[i] != '\0'; i++)
    {
        if (s3[i] == ' ' && s3[i - 1] != ' ')
            count++;
    }
    cout << "The count of words in string is " << count << endl;

    /*Checking if given string is valid or not ....
       (string is valid if there is only alphabet and numbers are present )*/

    char s4[] = {'i', 's', 't', 'e', 'k', 'h', 'a', 'r', '4', '6', '\0'};
    char s5[] = "istekhar46";
    int a = valid(s5);

    if (a == 0)
        cout << "The string is not valid " << endl;
    else
        cout << "The string is valid " << endl;

    // Reversing the string ....

    char s6[] = "istekhar";
    cout << "The given string is " << s6 << endl;
    Reverse(s6);
    cout << "Reversed string is " << s6 << endl;

    // cheching if string is palindrom .....

    char s7[] = "naman";

    int p = Palindrom(s7);
    if (p == 0)
    {
        cout << "The string is not palindrom " << endl;
    }
    else
    {
        cout << "The string is Palindrom " << endl;
    }

    // Finding Duplicates in string using bits ....
    /* Using Masking and Merging Method
     masking (adding)--> used for check whether bit is set to one or zero
     merging (oring)--> used for set the bits to 0 or 1 */

    char s8[] = "finding";
    long int H = 0, x = 0;

    for (i = 0; s8[i] != '\0'; i++)
    {
        x = 1;
        x = x << (s8[i] - 97);

        if ((x & H) > 0)
        {
            cout << " ' " << s8[i] << " ' "
                 << " is duplicate" << endl;
            // printf("%c is duplicate ",s8[i]);
        }
        else
        {
            H = x | H;
        }
    }

    // checking Anagram in string ....

    char s9[] = "decimaltone";
    char s10[] = "medicalnote";

    int H1[26] = {0};

    for (i = 0; s9[i] != '\0'; i++)
    {
        H1[s9[i] - 97]++;
    }

    for (i = 0; s10[i] != '\0'; i++)
    {
        H1[s10[i] - 97]--;
        if (H1[s10[i] - 97] < 0)
        {
            cout << "Not an Anagram" << endl;
            break;
        }
    }
    if (s10[i] == '\0')
        cout << "it is an Anagram" << endl;

    // Permutation fuction calling ...

    char s11[] = {'A', 'B', 'C'};
    Perm(s11, 0);

    return 0;
}