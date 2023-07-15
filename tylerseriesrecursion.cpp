#include<iostream>
using namespace std;
double e(int x, int n){
static double f=1;
static double p=1;
double r;
if(n==0)
return 1;
else 
r=e(x,n-1);
p=p*x;
f=f*n;
return r+p/f;


}
int main(){
     double k;
    k=e(4,15);
    cout<<k;
    
    return 0;
}