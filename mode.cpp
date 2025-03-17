#include<iostream>
using namespace std;
class A
{
    public:
   int var;
void print()
{
cout<<"value of v is : 12"<<endl;
cout<<"hey it's gaurisha";
}
};
int main()
{
   A obj;
   obj.var=24;
   cout<<"value of var is :"<<obj.var<<endl;
    obj.print();
    return 0;
}
