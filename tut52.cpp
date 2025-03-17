#include<iostream>
using namespace std;
int main()
{
    int factorial=1;
    int n;
    cout<<"Enter a no.: "<<endl;
    cin>>n;
     if(n<0)
     {
        cout<<"not applicable: "<<endl;

     }else{
        int i=1;
        while(i<=n)
        {
            factorial*=i;
            i++;
        }
        cout<<"factorial :"<<factorial<<endl;

     }
     return 0;
     }