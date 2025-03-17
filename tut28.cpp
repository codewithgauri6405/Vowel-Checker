#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    int add = a+b;
    int difference = a-b;
    int Product =a*b;
    int remainder =a%b;
    cout<<"The calculations are:- "<<endl;
    cout<<"Addition :"<<add<<endl;
    cout<<"Difference : "<<difference<<endl;
    cout<<"Product:"<<Product<<endl;
    cout<<"Remainder: "<<remainder<<endl;
    return 0;
    }