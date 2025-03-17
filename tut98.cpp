#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[] = { 12, 20, 30};
    int size = 3;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++)
    {
        smallest = min(arr[i], smallest);        // the smallest value will get printed in this smallest number 
    }
cout<<"smallest : "<<smallest<<endl;
return 0;
}