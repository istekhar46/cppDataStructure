// #include<iostream>
// using namespace std;
// struct  ractangle{
//       int length;
//       int bredth;
   
// };

// int area(struct ractangle r1){
//       return r1.bredth*r1.length;
// }

// int main(){
//     ractangle r={5,6};
//     cout<<r.length<<endl;
//     cout<<r.bredth<<endl;
//     cout<<area(r)<<endl;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct rect{
//     int len;
//     int bedth;
// };

// int area (struct rect *ptr ){
//     int n= ptr->bedth*ptr->len;
//     return n;
// }

// int main(){

// rect r={2,4};

// cout<<area(&r);
    
//     return 0;
// }


#include<iostream>
using namespace std;
struct rect{
    int len;
    int bedth;
};

int area (struct rect &ptr ){
    int n= ptr.bedth*ptr.len;
    return n;
}

int main(){

rect r={2,4};

cout<<area(r);
    
    return 0;
}
