#include<iostream>
using namespace std;
class Program{
  public:
int Example(int a, int b)
{

if(a>b){
  cout<<"a is greater than b"<<endl;
}
  else{
  cout<<"b is greater";
}
}
};

int main()
{
  int a,b;

  cout<<"Enter the value of a: "<<endl;
  cin>>a;
  cout<<"Enter the value  b: "<<endl;
  cin>>b;
  Program program;
  program.Example(a, b);


      return 0;
}


