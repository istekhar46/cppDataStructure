#include <iostream>
#include <vector>
using namespace std;


void printSpiral(vector<vector<int>> arr){
    bool flag = true;

        for(int i = 0; i<arr.size()-1; i++){
            for(int j=0; j<arr[0].size()-1; j++){
                
            }
        }
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 9, 9}};
    string str = "welcome";
    int arr[] = {5, 8, 11, 14, 17};
    int arr1[] = {8, 9, 15, 18, 20};
    int arr2[] = {3, 4, 6, 8, 10};

    vector<vector<int>> spiral = {
                                {1,2,3,4,5},
                                {6,7,8,9,10},
                                {11,12,13,14,15},
                                {16,17,18,19,20},
                                {21,22,23,24,25}
                                };
        \

    int n = 7;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == (n - i - 1))
            {
                cout << " " << str[i] << " ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}