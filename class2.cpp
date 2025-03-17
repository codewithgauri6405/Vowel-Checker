#include<iostream>
using namespace std; 
class person
{
    public:
    int var;
    void print()
    {
        cout<<"Hey here is gaurisha !";
    }
};
int main()
{
    person obj;
    obj.var =23;
    cout<<"Valur of var is :"<<obj.var<<endl;
    obj.print();
    return 0;
}