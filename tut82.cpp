#include<iostream>
using namespace std;

int primeNumber(int n)
{
    bool isPrime = true;
    for(int i =2;i<=n-1;i++)
    {

        if(n%i==0)
        {
        isPrime = false;
        break;
    }
}
}

int printPrimeupto(int limit)
{
    for(int i=1;i<=limit;i++)
    {
    if (primeNumber(i))
    {
        cout<<i<<" ";
    }
    }
    cout<<endl;
}




int main()
{
    printPrimeupto(10);
    return 0;
}