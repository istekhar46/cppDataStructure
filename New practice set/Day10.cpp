#include <iostream>
#include <vector>
using namespace std;

void sortNegative(int arr[], int n)
{

    int i, j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && i != j)
        {
            swap(arr[i], arr[j]);

            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void rotate(vector<int> nums, int k)
{
    while (k > 0)
    {
        int temp = 0;
        int j = nums.size() - 1;
        temp = nums[j];
        for (int i = 0; i < nums.size(); i++)
        {
            nums[j] = nums[j - 1];
            j--;
        }
        nums[0] = temp;
        k--;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

void findMissingWithDuplicte(int arr[], int n){

    vector<int> flag(n+1,1);
    for(int i =0 ; i< n; i++){
        flag[arr[i]] = -1;
    }
    for(int i =1 ; i< flag.size(); i++){
        if(flag[i] == 1){
            cout << i << " ";
        }
    }

}



int main()
{
    string s = "abc";
    string s1 = "cba";
    vector<char> v(3, 'a');
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    cout<< s.length()<< endl;
    int arr[] = {3, 4, 2, 2, 5};
    int n = sizeof(arr) / sizeof(int);

    findMissingWithDuplicte(arr, n);
    
   

    // vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    // int k = 3;
    // rotate(nums, k);

    //    int arr[] = {-59,-4,34,-3,5,32,-2,2};
    //     int n = sizeof(arr) / sizeof(arr[0]);
    //     sortNegative(arr, n);

    // vector<vector<int>> arr(5, vector<int>(5, -8));

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<vector<int>> v;
    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6};
    // vector<int> c{7, 8, 9};
    // v.push_back(a);
    // v.push_back(b);
    // v.push_back(c);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}