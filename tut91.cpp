#include<iostream>
using namespace std;

void powerOfTwo(int n)
{
      
       while(n%2==0)
       {
        n /=2;
       }
       if(n ==1)
        {
            cout<<"given no. is power of two"<<endl;
        }else{
            cout<<"given no. is not power of two"<<endl;
        }
     }


int main()
{
    powerOfTwo(4);
    return 0;
}