#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    double a = 5.0/2;
    cout<<sizeof(a)<<endl;
    int b = 'S';
    cout<<b<<endl;

    int c = 6;
    char d(c);
    
    cout<<typeid(d).name()<<d<<endl;
    return 0;
}