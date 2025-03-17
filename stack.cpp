#include<iostream>
#include<stack>
using namespace std;
void StackExample()
{
    stack<int>st;
    cout<<"Stack elements: ";
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
   while(!st.empty())

   {
    cout<<st.top()<<" ";
    st.pop();
   }
   
    cout<<endl;
     
}
int main()
{
     StackExample();
     return 0;
}