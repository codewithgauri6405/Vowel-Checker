#include<iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0;
    int pow = 1;

while(decNum>0)
    {
        int rem = decNum%2;
        decNum /=2 ;

        ans+= (rem*pow);
        pow = pow*10;
    }
    return ans;  // binary form
}
    int main()
{
    
    
        cout<<decToBinary(37)<<endl;

    
        
        return 0;
}