#include<iostream>
using namespace std;

int main(){

    float num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num!=0){
        if (num == 1.5)
        {
            cout<<"Hello";
        }
        else if (num == 2.5)
        {
            cout<<"Hi";
        }    
        
    }
    else{
            cout<<"Check your value";
        }

    return 0;
}