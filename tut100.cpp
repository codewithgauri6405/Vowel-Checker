#include<iostream>
using namespace std;
class Animal{
    public:
     void Eat()
    {
        cout<<"I eat food"<<endl;

    }
};
    class Dog :public Animal
    {

        public:
        void Bark()
        {
            cout<<"I make barking sounds"<<endl;
        }

    };
    int main()
    {
        Dog dog;
       dog.Eat();
        dog.Bark();
        return 0;
    }
