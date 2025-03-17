#include<iostream>
using namespace std;

class Animal{
    public:
    void Eat()
    {
        cout<<"Gaurisha"<<endl;
    }
};
class Dog : public Animal
{
    public:
    void Breed()
    {
       cout<<"jaya bacchan"<<endl;
    }
};
class Myclass : public Animal{
    public:
    void Pet()
    {
        cout<<"i m pet dog"<<endl;

    }
};
int main()
{
    Dog dog;
    dog.Eat();
    dog.Breed();
     
     Myclass cs;
     cs.Eat();
     cs.Pet();
     return 0;
}