#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5]= {1,2,3,4,5};
    int target = 3;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"the target is "<<target<<endl;
        }
    }
}