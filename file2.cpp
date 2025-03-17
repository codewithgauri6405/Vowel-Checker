#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter value of the year : ";
    cin>>year;
    if( year % 4 == 0 && year % ! 100==0 || year % 400 == 0)
    {
        cout<<"given year is  leap year";
    
    
    }
    else
    {
        cout<<"given year is not a leap yaer";
    }
}




