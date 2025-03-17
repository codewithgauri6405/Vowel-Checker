#include<iostream>
using namespace std;
int main()
{
    bool isPrime= true;
    int n;
    cout<<"Enter no.: "<<endl;
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"prime number"<<endl;
    }else{
        cout<<"non prime number"<<endl;
    }
    cout<<endl;
    return 0;
}