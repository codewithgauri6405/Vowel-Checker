#include<iostream>
using namespace std;
class Animal{
    public:
    void Eat()
    {
        cout<<"I eat food"<<endl;

    }
};
class Dog : public Animal{
    public :
    void Bark()
    {
        cout<<"I make sounds"<<endl;

    }
};
class Labrador :public Dog{
    public:
    void Breed()
    {
        cout<<"I m labrador"<<endl;
    }
};
int main()
{
    Dog dog;
    dog.Eat();
    dog.Bark();

    Labrador cs;
    cs.Bark();
    cs.Breed();
    return 0;
}