#include<iostream>
using namespace std;

float calculatesum(float a, float b){
    float sum = a+b;
    return sum;
}

int main(){

    float num1,num2;

    cout<<"Enter your first number: "<<endl;
    cin>>num1;

    cout<<"Enter your second number: "<<endl;
    cin>>num2;

    cout<<calculatesum(num1,num2);

    return 0;
}