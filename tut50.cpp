#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(i%3==0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of numbers :"<<sum<<endl;
    return 0;
}