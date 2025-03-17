#include<iostream>
using namespace std;
class person 
{
  public:
    int var;
    void print()
    {
        cout<<"Hello !";
    }
};
int main()
{
    person  obj;
    obj.print();
    return 0;
}