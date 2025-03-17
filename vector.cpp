#include<bits/stdc++.h>
using namespace std;
void VectorExample()
{
    vector<int> v(5,30);
    v.push_back(2);
    cout<<"Vector elements : ";
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;
    
}
int main()
{
    VectorExample();
    return 0;
}
