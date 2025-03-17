#include<iostream>
#include<vector>
using namespace std;
void VectorElement()
{
    vector<int>v(2,100);  //{100,100}
    cout<<"Vector elememts: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    

    v.insert(v.begin(),300);  //{300,100,100}
    v.insert(v.begin()+2,40);  // { 300,100,40,100}
    v.pop_back(); //{300,100,40}
    cout<<"Elements after adding: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
int main()
{
    VectorElement();
    return 0;
}