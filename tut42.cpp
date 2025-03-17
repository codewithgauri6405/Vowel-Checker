#include<iostream>
using namespace std;
int main()
{
    int oddSum=0;
    int n=10;
    for(int i=1;i<=10;i++)
    {
        if(i%2!=0)
        {
            oddSum+=i;
        }
    }
    cout<<"sum of odd numbers: "<<oddSum<<endl;
    return 0;
}