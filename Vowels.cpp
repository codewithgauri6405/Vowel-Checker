#include<iostream>
using namespace std;

    int countVowels(string str){
     int count = 0;
    for(char c : str){
        c = tolower(c);
        if(c=='a' || c=='e' || c =='i' || c=='o' || c=='u'){
            count++;
        }
    }
    return count;

}
int main(){
    string input;
    cout<<"Enter a string : ";
    cin>>input; 

    int vowelCount = countVowels(input);
    cout<<"Numbers of vowels : "<<vowelCount<<endl;

    return 0;
}
