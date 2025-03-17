#include<bits/stdc++.h>
using namespace std;
int vectorExample()
{
    vector<int>v(2,30);
    cout<<"Vector elements  before erasing:";
    
     for(auto i:v)
     {
        cout<<i<<" ";
        
     }
     cout<<endl;


      v.erase(v.begin()+1);
      cout<<"Vector elements after erasing:";
      for(auto i:v)
      
      {
     cout<<i<<" ";
}
cout<<endl;
}
int main()
{
    vectorExample();
    
    return 0;
}