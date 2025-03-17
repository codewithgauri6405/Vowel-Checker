#include<iostream>
using namespace std;

class Program{
    public :
    void Method(int a, int b)
    {
        int add = a+b;
        cout<<"Addition is " <<add<<endl;
    }
    public:
    void Method(double a, double b)
    {
        double product = a*b;
        cout<<"Product is "<<product<<endl;
    }
};
int main()
{
    Program cs;
    cs.Method(2,3);
    cs.Method(2.5, 3.5);
    return 0;
}