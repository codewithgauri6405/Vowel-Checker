#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n=5;
    int i=1;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}