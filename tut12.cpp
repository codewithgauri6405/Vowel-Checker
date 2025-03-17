#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,4,5,6};  // Declaraation and initialisation the array
    int size = sizeof(arr) / sizeof(arr[0]);// calculates the size of the array
    

    for(int i=0;i<size;i++)  // to print all the elements in the array
    {

    cout<<arr[i]<<" "<<endl; // prints the element with the space after every element
    }
   
       return 0; 
}