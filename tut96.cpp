#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[] = {4,0,-8,-10,90};

      int size = 5;
      int index ;
    int smallest = INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
            index = i;  // print the index no. of the smallest element in the array

        }
    }
    cout<<"index number of given result value: "<<index<<endl;
    return 0;

}