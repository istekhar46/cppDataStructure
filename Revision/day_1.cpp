#include <iostream>
#include <string>

using namespace std;

class Dog
{
    // private:
public:
    int id = 0;
    string name = "";
    string breed = "";

    // public:

    Dog() {};

    // Dog (int a, string b, string c){
    //     id = a;
    //     breed = b;
    //     name = c;
    // }
    Dog(int a, string b, string c) : id(a), name(b), breed(c) {}

    string getName()
    {
        return name;
    }

    string getBreed()
    {
        return breed;
    }

    void dogName()
    {
        cout << "the dog's name is :" << name;
    }
};

int main()
{
    // Dog dog1;
    // Dog dog2(1,"c2","xy");
    // int a = 'a';
    // cout<<a<<endl;

    // cout<<"Dog "<<dog2.getName()<<" is "<<dog2.getBreed()<<" breed"<<endl;
    // cout<<"Dog "<<dog1.name<<" is "<<dog1.breed<<" breed";

    int n = 5;
    char a = 'D';

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         char c = a - j + 1;
    //         cout << " " << c;
    //     }
    // // a = 'A';
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout<<"   ";
    //     }
        
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         cout<<" " <<"*"<<" ";
    //     }

    //     for (int k = 0; k < n - i ; k++)
    //     {
    //         cout<<" " <<"*"<<" ";
    //     }

    //     cout<<endl;
    // }

    for (int i = 1; i < n; i++)
    {
        for(int j=1; j< n-i; j++){
            cout<<"   ";
        }
        for(int k=1; k<= i; k++){
            cout<<" "<<k<<" ";
        }
        for(int l=1; l<i; l++){
            cout<<" "<<i-l<<" ";
        }

        cout<<endl;
    }
    
    

    return 0;
}