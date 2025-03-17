#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter number 1 : "<<endl;
    cin>>num1;
    cout<<"Enter number 2 : "<<endl;
    cin>>num2;
    char operation;
    cout<<"Enter the symbol (+, -, * , %, / ) to perfom calculation between two operands : "<<endl;
    cin>>operation;
    switch(operation){
        case '+' :{
            cout<<"Addition : "<<(num1+num2)<<endl;
            break;
        }
        case '-' : 
        {
            cout<<"Subtraction : "<<(num1-num2)<<endl;
            break;
        }
        case '*' : 
        {
            cout<<"Product : "<<(num1*num2)<<endl;
            break;

        }
        case '/' : 
        {
            cout<<"Division : "<<(num1/num2)<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid input"<<endl;

        }

    }
    return 0;
}