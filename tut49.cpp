#include<iostream>
using namespace std;
int main()
{
    
    int sum=0;
    int N=10;
    for(int i=0;i<=N;i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }
    }
    cout<<"Sum of numbers: "<<sum<<endl;
    return 0;
}