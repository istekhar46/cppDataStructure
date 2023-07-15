#include<iostream>
using namespace std;

int main(){
    int n;
    int *A= new int [10];
    cout<<"Entr the elements"<<endl;
     for(int i=0;i<4;i++){
        cin>>A[i];
     }
     for(int i=0;i<4;i++){
        cout<<A[i]<<" ";
     }
    return 0;
}