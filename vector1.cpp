#include<bits/stdc++.h>
using namespace std;
int vectorExample()
{
    vector<int>v(6);
    v.push_back(12);
    cout<<"Vector Elements :";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
   
      
int main()
{
    vectorExample();
    return 0;
}

