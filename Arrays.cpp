#include<iostream>
using namespace std;

//Prototyping
int customArray(int arraySizee, int arrayy[]);

int main(){

    int arraySizee;
    cout<<"Enter array size: ";
    cin>>arraySizee;
    int arrayy[arraySizee];

    for (int i = 0; i < arraySizee; i++)
    {
        cout<<"Enter your Array Elements: "<<endl;
        cin>>arrayy[i];
    }
    
    customArray(arraySizee,arrayy);



    const int arraysize = 4;
    int iarray[arraysize] = {1,4,5,7};

    //Accessing Array elements
    cout<<iarray[0]<<endl;
    cout<<iarray[1]<<endl;
    cout<<iarray[2]<<endl;
    cout<<iarray[3]<<endl<<endl;

    //printing Array using for loop
    for (int i = 0; i < arraysize; i++)
    {
        cout<<iarray[i]<<endl;
    }
    
    //Taking input in array
    const int arraySize = 5;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout<<"Enter your Numbers: "<<endl;
        cin>>array[i];
    }

    //printing an array
    for (int j = 0; j < arraySize; j++)
        {
            cout<<"Your array elements are: "<<array[j]<<endl;
        }
    

    return 0;
}

int customArray(int arraySizee, int arrayy[]){
    for (int i = 0; i < arraySizee; i++)
    {
        cout<<"Array elements are: "<<arrayy[i]<<endl;
    }
    
}

    