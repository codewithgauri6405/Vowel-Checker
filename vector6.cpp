#include<bits/stdc++.h>
using namespace std;
void Vector()
{
    vector<int>numbers ={1,2,3,4,5};
    cout<<"Vector elements: ";
    for(auto i:numbers)
    {
        cout<<i<<" ";

    }
    cout<<endl;

    numbers.erase(numbers.begin()+2,numbers.begin()+4);
    cout<<"Vector elements after erasing: ";
    for(auto i:numbers)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
int main()
{
Vector();
return 0;
}

 