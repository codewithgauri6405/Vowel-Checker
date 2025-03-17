#include<iostream>
using namespace std;
int main()
{
    int evenSum =0;
    int n=20;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            evenSum+=i;
        }
    }
    cout<<"sum = "<<evenSum<<endl;
    return 0;
}