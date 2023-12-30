#include<iostream>
using namespace std;

//prototyping a function
void printsomething();

int main(){

//calling
printsomething();

}


//Function Defination at below
//But if your func def is at below and you call at main function you will get error bcz program starts
//from top to bottom
//so copy your function header e.g, (void printsomething()) and paste below namepsace and this process is known as prototyping
void printsomething(){
    int a = 34;
    int b = 25;

    int sum;
    sum = a+b;
    
    cout<<sum;
    
}