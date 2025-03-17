#include<bits/stdc++.h>
using namespace std;
int main()

{
    int age;
    cin>>age;
    if(age<18)
    {
        cout<<"not eligiblefor job";
    }
   
    else if(age<=57)
    {
        cout<<"eligible for the job,but retirement soon";
        if(age>=54)
        {
            cout<<"eligible for the job";
        }

    }
    else (age>57)
    {
        cout<<"retirement time ";
    }
    return 0;
}