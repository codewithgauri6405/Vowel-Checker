#include<bits/stdc++.h>
using namespace std;
void VectorExample()
{
    vector<int>v(2,90);
    cout<<"Elements of vector: ";
    for(auto i:v)
    {
cout<<i<<" ";
}
cout<<endl;



v.insert(v.begin()+0,30);
cout<<"Elements after adding: ";
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
}

int main()
{
    VectorExample();
    return 0;
}