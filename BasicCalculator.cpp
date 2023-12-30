#include<iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout<<"Enter a Number: \n";
    cin>>a; 

    cout<<"Enter a Number: \n";
    cin>>b;

    int sum,subtract;
    float division,modulus,multiplication;

    sum = a+b;
    subtract=a-b;

    division = a/b;
    modulus = a%b;
    multiplication = a*b;

    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
    cout<<"The subtract of "<<a<<" and "<<b<<" is: "<<subtract<<endl;
    cout<<"The division of "<<a<<" and "<<b<<" is: "<<division<<endl;
    cout<<"The Multiplication of "<<a<<" and "<<b<<" is: "<<multiplication<<endl;
    cout<<"The Modulus of "<<a<<" and "<<b<<" is: "<<modulus<<endl;


}