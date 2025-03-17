#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {-15, -2, 65, 90, 54};
    int size = 5;
    
    int largest = INT_MIN;
    for(int i=0;i<size;i++)
    {
          if(arr[i]>largest)
          {
            largest = arr[i];

          }
    }
    cout<<"Largest :"<<largest <<endl;
    return 0;
}

