#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int minelement = arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<minelement)
        {
            minelement = arr[i];
        }
        
}
cout<<"shortest element in the given array is: "<<minelement<<endl;
return 0;
}