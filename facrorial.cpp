#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    long long factorial=1;
    cout<<"Enter the number to find it's factorial :";
    cin>>number;
    for (int i=1;i<=number;i++){
    factorial *=i;
    }
    
       cout<<"The factorial of  "<<number<<" is :"<<factorial<<endl;

    
    return 0;
}