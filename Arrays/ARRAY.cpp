//declearation and intialiazation of array

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;
    int A[size];

    cout<<"Enter the elements of array "<<endl;
    for(int i =0;i<size;i++){
        cin>>A[i];

    }

  
    
    for(int i=0; i<size;i++){
        cout<<A[i]<<" ";
    }


    delete []A;

   

 

    return 0;
}