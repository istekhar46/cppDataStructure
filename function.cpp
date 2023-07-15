#include<iostream>
#include<iomanip>
using namespace std;
template <class T1,class T2>
 float ADD(T1 a, T2 b){
    // float c=(a+b)/2.0;
    float c=(a+b);
    // cout<<c;
    return c;
 }
int main(){
    float d;
     d=   ADD(5,6.2565641);
  cout<<setprecision(4)<<d;

    return 0;
} 