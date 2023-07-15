#include<iostream>
#include<stdio.h>
using namespace std;
template <class T>
class arithmatic{
 T a;
 T b;
 public:
 arithmatic(T a,T b);
 T add();
 T sub (T a,T b);

}; 
template <class T>
arithmatic<T>:: arithmatic(T a,T b){
    this->a=a;
    this->b=b;
}
template <class T>
T arithmatic<T>:: add(){
    return a+b;
}
template <class T>
T arithmatic<T>:: sub(T a, T b){
    return a-b;
}


int main(){
    arithmatic<int> s1(50,50);
    cout<<"the addition is "<<s1.add()<<endl;
    cout<<"the subtraction is "<<s1.sub(50,20)<<endl;
 

    cout<<"\n\n";
    arithmatic<float> s2(50.5,50.11);
    cout<<"the addition is "<<s2.add()<<endl;
    cout<<"the subtraction is "<<s2.sub(50.11,20.15)<<endl;
  int size=3;
    int *arr = new int[size];
     
     arr[1]=100;
     arr[2]=200;
     arr[3]=300;
for (int i=0; i<size;i++){
    cout<<arr[i+1]<<" ";
}


    return 0;
}