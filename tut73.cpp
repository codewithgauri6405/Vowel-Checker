#include<iostream>
using namespace std;

// sum of two number
double sum(double a, double b)
 {
  double s = a+b;
    return s;
 }

 int minOfTwo(int a, int b) // parameters
 {
      if(a<b){
        return a;
      }
      else{
      return b;
      }
 }

 int main()
 {
    
    
    cout<<"Minimum of two values: "<<minOfTwo(5, 10); //arguments
   return 0;
 }