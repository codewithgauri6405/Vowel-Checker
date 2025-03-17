#include<iostream>
using namespace std;
class Program{
public:
  int Addition()
{
     int a,b;
      cout<<"value of a is:"<<endl;
      cin>>a;
      cout<<"value of b is:";
      cin>>b;
    
return a+b;    
}
};
int main()

{
    
      Program program;
      int result = program.Addition();
      cout<<"The sum of a and b is: "<<result<<endl;
      return 0;         
}

