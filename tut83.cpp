#include<iostream>
using namespace std;
int primeNumber(int n)
{
    bool isPrime = true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }
}

 int printPrimesupTo(int limit)
 {
    for(int i=1;i<=limit;i++)
    {
        if(primeNumber(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
 }

 int main()
 {
   cout<<"Prime number from 1 to 10: ";
    printPrimesupTo(10);
    return 0;
 }