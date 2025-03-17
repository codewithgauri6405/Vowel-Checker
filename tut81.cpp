#include<iostream>
using namespace std;

int primeNumber(int n)
{
  

    bool isPrime = true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)    // false
        {
            isPrime = false;
            break;
            
        } 
    }
    

        if(isPrime==true)
        {
            cout<<"prime"<<endl;

        }
        else
        {
            cout<<"non prime"<<endl;
        }
            
        
    }


int main()
{

   primeNumber(4);   
    
    return 0;
}