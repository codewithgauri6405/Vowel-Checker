#include<iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digiSum = 0;
    while(num > 0)
    {
        int lastDig = num % 10;
      num/= 10;

      digiSum+=lastDig;


        
    } 
    return digiSum;

}
int main()
{
    cout<<" sum of digits: "<<sumOfDigits(2356)<<endl;
    return 0;
}