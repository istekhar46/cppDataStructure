#include <iostream>
#include <vector>
using namespace std;

class Car
{
public:
    int id;
    string name;
};

int reverseArray(int (&arr)[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}

void print2d(vector<vector<int>> &mat)
{
    for (auto &row : mat)
    {
        for (auto x : row)
        {
            cout << x << " ";
        }
        cout<<endl;
    }
}

vector<int> targetIndex (vector<int>&arr, int target){

    vector<int> result;
    for (int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            int sum = arr[i] + arr[j];
            if(sum == target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    return result;

}

int main()
{

    vector<int> arr(5, 0);
    vector<int> test = {1,2,5,7};
    int target = 12;

    vector<int> print = targetIndex(test, target);
    for(auto x : print){
        cout<< x;
    }

    // for (auto x : arr)
    // {
    //     cout << x;
    // }
    // cout<<endl<<"------"<<endl;
    // vector<vector<int>> arr1(3, vector<int>(3, 0));
    // print2d(arr1);
    // cout<<endl<<"------"<<endl;
    // int count = 0;
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     for (int j = 0; j < arr1[i].size(); j++)
    //     {
    //         // cout << arr1[i][j] << " ";
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // cout << endl;
    // int aarr[5] = {1, 2, 3, 4, 5};
    // reverseArray(aarr, 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << aarr[i] << " ";
    // };

    // Car car1;
    // car1.id = 101;
    return 0;
}