#include<iostream>
using namespace std;
int main()
{
    int oddSum=0;
    int n=10;
    int i=1;
    while(i<=10)
    {
        

        if(i%2!=0)
        {
        
            oddSum+=i;

        }
        i++;
    }
    cout<<"sum = "<<oddSum<<endl;
    return 0;
}