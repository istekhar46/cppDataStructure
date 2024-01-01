#include <iostream>
using namespace std;

int findMissingByBinery(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    if (arr[n - 1] == n)
        return n + 1;

    while (start <= end)
    {
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            // right me jao
            start = mid + 1;
        }
        else
        {
            // store mid in ans
            ans = mid; 
            // lesf me jao
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return ans + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int n = 8;
    
    cout<<"the missing value is: "<<findMissingByBinery(arr,n)<<endl;
    // cout<<(2+2)/2<<endl;
    // cout<<(1+2)/2<<endl;

    return 0;
}