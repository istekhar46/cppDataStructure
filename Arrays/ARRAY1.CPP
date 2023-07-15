#include<iostream>
using namespace std;

int main(){
    

    int *p=new int [5];
    p[0]=50;
    p[1]=40;
    p[2]=30;
    p[3]=20;
    p[4]=10;

    int *q=new int [10];
      q[5]=0;
      q[6]=0;
      q[7]=0;
      q[8]=0;
      q[9]=0;
    for(int i=0;i<5;i++){
       q[i]=p[i];
    } 
     delete []p;
      p=q;
      q=NULL;
    
    
    cout<<"arr p is ";
    for(int i=0;i<10;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    cout<<"arr q is ";
    for(int i=0;i<10;i++){
        cout<<q[i]<<" ";
    }
    return 0;
}