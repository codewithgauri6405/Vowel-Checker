#include<bits/stdc++.h>


using namespace std;
int main()
{
    int marks[] = {45, 72, 34, 68, 45, 78, 65};
    int size = 7;
      int largest = INT_MIN;
    int index;
    for(int i=0; i<size;i++)
    {
        
           if(marks[i]>largest){
            largest = marks[i];
                  index = i;
           }
       
        }
    
    cout<<"largest result value index no. is : "<<index<<endl;
    return 0;
}