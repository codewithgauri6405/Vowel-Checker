#include<bits/stdc++.h>
using namespace std;

    int vectorExample()
    {
       vector<int>v(2,100);
       cout<<"Vector elements before adding:";
       

       for(auto i:v)
       {
        cout<<i<<" ";
       }
       cout<<endl;

       v.insert(v.begin(),300);
       cout<<"vector elements after adding:";
       for(auto i:v)
       {
        cout<<i<<" ";
       }
    }

int main()
{
      vectorExample();
      return 0;
}
