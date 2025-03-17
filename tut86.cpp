#include<iostream>
using namespace std;
int binToDec(int binNum)
{
    int ans =0;
    int pow=1;
    while(binNum>0)
    {

        int rem = binNum%2;
        ans+=(rem*pow);
        binNum/=10;
        pow *=2;

    }
    return ans;   //decimal form
}

int main()
{
    cout<<binToDec(10011);
    return 0;
}