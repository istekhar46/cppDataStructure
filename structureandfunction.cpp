#include<iostream>
using namespace std;
struct ractangle{
    int length;
    int bredth;
};
void intilize (struct ractangle *r1,int a , int b){
   r1->length=a;
   r1->bredth=b;
    cout<<"length  "<<r1->length<<endl;
    cout<<"bredth  "<<r1->bredth<<endl;
    
}
int area(struct ractangle r1){
    int d;
    d= r1.bredth*r1.length;
    cout<<"area is "<<d<<endl;
    return d;
}
void change(struct  ractangle *r1,int x){
    r1->length=x;
}
int main(){
    struct ractangle r1;

    intilize(&r1,5,10);
    area(r1);
   
    change(&r1,20);
    cout<<"Changed value of length  "<<r1.length<<endl;
    return 0;
}