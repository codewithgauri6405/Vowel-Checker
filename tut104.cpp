#include<iostream>
using namespace std;

class Program{
    public :
    virtual void Sound()
    {
        cout<<"Method overriding";
    }
    };
    class Myclass : public Program{
        public:
    void Sound() override  {
        cout<<"Woof Woof"<<endl;
    }};
    int main()
    {
        Myclass cs;
        cs.Sound();
        return 0;
    }