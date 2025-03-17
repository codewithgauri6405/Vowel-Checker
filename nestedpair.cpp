#include<bits/stdc++.h>
using namespace std;
int NestedPairExample()
{
    pair<int , pair<int,int>> q = {1, {5,8}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first;
}
int main()
{
    NestedPairExample();
    
    return 0;
}