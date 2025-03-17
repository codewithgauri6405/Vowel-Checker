#include<iostream>
using namespace std;
int main()
{
    bool isPrime =true;
    int n=4;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    
        if(isPrime==true)
        {
            cout<<"prime no.\n";
        }else{
            cout<<"non prime\n";
        }
    
    cout<<endl;
    return 0;
}