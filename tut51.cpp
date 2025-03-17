#include<iostream>
using namespace std;
int main()
{
    int factorial=1;
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n<0){
        cout<<"Factorial is not applicable for negative numbers: "<<endl;

    }else{
        for(int i=1;i<=n;i++)
    {
         factorial*=i;

    }
    cout<<"Factorial of given number is: "<<factorial<<endl;
    
    }
    return 0;
}