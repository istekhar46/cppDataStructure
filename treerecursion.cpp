#include<iostream>
#include<stdio.h>
using namespace std;
void func(int n){
    if(n>0){
    // printf("%d ",n);
    cout<<n<<" ";
    func(n-1);
    func(n-1);
    }
}
int main(){
    func(3);
   return 0;
}