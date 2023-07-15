#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int A[3][4]={{1,2,3,4},{4,5,6,7},{7,9,5,1}};
    // A[0][0]=1;
    // A[0][1]=2;
    // A[0][2]=3;
    // A[1][0]=4;
    // A[1][1]=5;
    // A[1][2]=6;

int *B[3];
   B[0]=(int *)malloc(4*sizeof(int));
   B[1]=(int *)malloc(4*sizeof(int));
   B[2]=(int *)malloc(4*sizeof(int));
   




    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            cout<<A[i][j]<<" ";
            cout<<endl;
            // printf("%d ",A[i][j]);
            // printf("\n");
        
    }
    return 0;
}