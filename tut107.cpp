#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxSum = INT_MAX;
    int n =5;
    int arr[5]={1,2,3,4,5};
    for(int st = 0;st<n;st++)
    {
        int currSum = 0;
        for(int end = 0;end<n;end++)
        {
            currSum += arr[end];
            maxSum = (maxSum , currSum);
        }
            
        
    }
    cout<<"The maximum subarray element sum in the array :"<<maxSum<<endl;
    return 0;
}