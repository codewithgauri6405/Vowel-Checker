#include<iostream>
using namespace std;
int CountDividingdigits(int n)
{
 int count=0;
 int original =n;
 while(n>0)
 {
    int digit = n % 10;
    n/=10;
 if(digit !=0 && original%digit ==0)
 {
    count++;
 }

 }
 return count;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int result= CountDividingdigits(n);
    cout<<"Number of digits that evenly divide "<<n<<" is : "<<result<<endl;
     
     return 0;
}

