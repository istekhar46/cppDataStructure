#include<iostream>
using namespace std;

class DiagonalMatrix{
  int A[20];
  int i,j,x;

  public:

void setdata(int A[],int i, int j,int x){
       
        if(i==j)
        A[i-1]=x;
}

int getdata(int A[],int i, int j){
    if(i==j)
    return A[i-1];
    else 
    return 0;
}
};

int main()
{

int A[5]={0};

DiagonalMatrix arr;
arr.setdata(A,2,2,3);
arr.setdata(A,1,1,5);
arr.setdata(A,0,0,6);
int l=arr.getdata(A,2,2);
int m=arr.getdata(A,1,1);
int n=arr.getdata(A,0,0);
cout<<l<<" "<<m<<" "<<n<<endl;

    return 0;
}