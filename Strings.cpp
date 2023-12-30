#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){

    string inputString;

    cout<<"Enter a string: ";
    getline(cin,inputString);

    //string functions

    //to join strings
    string s1 = "Hel";
    string s2 = "lo";

    s1.append(s2);
    cout<<s1<<endl;

    //achieving the same results
    cout<<s1 + s2<<endl;

    //Accessing characters
    cout<<s1[0]<<endl;

    string empty = "ssgwyswgs suwuhsuwh sg3y";
    empty.clear();
    cout<<empty<<endl;

    //comparing strings
    string firstString, secondString;

    cout << "Enter the first string: ";
    getline(cin, firstString);

    cout << "Enter the second string: ";
    getline(cin, secondString);

    // Compare the strings
    if (firstString == secondString) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;

        // Compare lexicographically
        if (firstString < secondString) {
            cout << "First string comes before the second string lexicographically." << endl;
        } else {
            cout << "Second string comes before the first string lexicographically." << endl;
        }
    }

    //checking if string is empty
    string dum = "shwushuiwhsu3hewewyhbxue";
    dum.clear();

    if(dum.empty()){
        cout<<"string is empty";
    }

    if(!dum.empty()){
        cout<<"string is not empty";
    }

    //removing character with auto shifting
    string serase = "Dumb is dumb";
    serase.erase(3,3); //arg1:from which index, how much characters
    cout<<dum;

    //to find something in string
    serase.find("bm");
    cout<<serase<<endl;

    //inserting string at 2nd index
    serase.insert(2,"lol");

    //to find length of string
    cout<<serase.length()<<endl;

    //iterating through string
    for (int i = 0; i < serase.length(); i++)
    {
        cout<<serase[i]<<endl;
    }
    
    //to find substring of a string
    string s = serase.substr(6,4);
    cout<<s<<endl;

    //to convert number string into integer
    string ns = "662";
    int x = stoi(ns);
    cout<<x+2<<endl;

    //converting integer into string
    int nstring = 63;
    cout<<to_string(nstring)+"2"<<endl;

    //sorting a string (add a header file #include<algorithm>)
    string rndm = "absheednlusi";
    sort(rndm.begin(),rndm.end()); //begin tells the start of string and end tells the ending
    cout<<rndm<<endl;



    return 0;
}