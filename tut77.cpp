#include<iostream>
using namespace std;
int sum(int a, int b)
{
   a=a+10; // 15
   b=b+10;  // 20
    return a+b; //35
}
int main()
{
    int a=5, b=10;
    cout<<sum(a,b)<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;

}