#include <iostream>
#include <vector>
using namespace std;

void sort(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            c++;
            arr[i] = 0;
        }
    }
    for (int i = c; i < n; i++)
    {
        arr[i] = 1;
    }
    // for(int j = n-1, k =0; k<c; j--, k++){
    //     arr[j]=1;
    // }
}

void intersect(vector<int> arr, vector<int> arr2)
{
    vector<int> interSect;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr[i] == arr2[j])
            {
                interSect.push_back(arr[i]);
                arr2[i] = -1;
            }
        }
    }
    for (auto it : interSect)
    {
        cout << it << " ";
    }
}

void unionArr(vector<int> arr, vector<int> arr2)
{
    //    vector<int> unionArr;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr[i] == arr2[j])
            {
                arr2[j] = INT16_MIN;
            }
        }
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        if (arr2[i] != INT16_MIN)
        {
            ans.push_back(arr2[i]);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

int main()
{

    vector<int> arr{1, 3, 5, 7};
    vector<int> arr2{2, 5, 6, 8, 7, 3, 3};

    intersect(arr, arr2);
    cout << endl;
    unionArr(arr, arr2);

    // vector<int> v;
    // v.push_back(10);
    // cout<<v.size()<<endl;

    // for(auto it : v)(
    //     cout<<it<<" "
    // );

    // int arr[] = {0,1,0,1,1,0,0,0,1};
    // int n = 8;
    // sort(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int a = 4.4;
    // cout<<a<<endl;
    // int qa = 20;
    // int &ra = qa;
    // int* ptr = &ra;
    // cout << ra << endl;
    // cout << &qa << endl;
    // cout << ptr << endl;
    return 0;
}