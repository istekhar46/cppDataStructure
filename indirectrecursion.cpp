#include<iostream>
using namespace std;
void B(int n);
void A(int n){
    if (n>0){
        cout<<n<<" ";
        B(n-1);
    }
 }
 void B(int n){
    if(n>1){
        cout<<n<<" ";
        A(n/2);
    }
}
int main(){
    A(50);
    
    return 0;
}