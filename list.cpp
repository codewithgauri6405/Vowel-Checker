#include<iostream>
#include<list>
using namespace std;
void ListExample()
{
    list<int>ls(2,5);   //{5,5}
   
    cout<<" List elemetns: ";

     for(auto i:ls)
     {
        cout<<i<<" ";

     }
     cout<<endl;
      
      ls.push_front(9);  //{9,5,5}
      cout<<"after the function: ";
      for(auto i:ls)
      {
        cout<<i<<" ";
      }
      cout<<endl;
}
int main()
{
    ListExample();
    return 0;
}