#include<bits/stdc++.h>
using namespace std;
int Program()
{
    pair<int, pair<int ,pair<int, pair<int,int>>>> p={1,{3,{6,{7,5}}}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second.first<<" "<<p.second.second.second.first<<" "<<p.second.second.second.second;
}
int main()
{
    Program();
    return 0;
}