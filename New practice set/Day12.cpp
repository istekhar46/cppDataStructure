#include<iostream>
#include<vector>
using namespace std;

int firstRepeated(int arr[], int n) {
    // code here
    int max = 0;
    for(int i =0; i< n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    vector<vector<int>> arr2(max+1,vector<int>(2,0));
    for(int i = 1 ; i <= max;i++){
        arr2[arr[i]][0] = arr[i];
        arr2[arr[i]][1]++;
        cout << arr2[i][0] << " " << arr2[i][1] << endl;
    }
      
    for(int i = 0; i<= max+1 ; i++){
        if(arr2[arr[i]][1] > 1){
            return arr2[arr[i]][0] ;
        }
    }
    
    return -1;
}

int main(){
    int arr[] = {3, 5, 3, 4, 3, 5, 6};
    int arr3[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<firstRepeated(arr,7);
    cout << endl;
    for(int i =0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << arr3[j][i] <<" ";
        }
        cout << endl;
    }
    bool booln = 1;

    if(booln)cout<<"true";else cout<<"false";

    
    return 0;
}