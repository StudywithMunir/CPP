#include<iostream>
using namespace std;


// Function to swap the values of two integers using pointers
void swapValues(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

   int a = 4;
   int b = 5;

   cout<<"Values before swapping: "<<endl;
   cout<<a<<" and " <<b<<endl;

   cout<<"Values after swapping: "<<endl;

   // Call the function to swap values using pointers
    swapValues(&a, &b);

     cout<<a<<" and " <<b<<endl;


    return 0;
}