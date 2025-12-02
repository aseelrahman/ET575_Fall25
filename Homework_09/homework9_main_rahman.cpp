/*
Aseel Rahman
Homework 9 – Arrays application
*/

#include<iostream>
#include "homework9_functions_rahman.cpp"

using namespace std;

int main(){
    int sizearray = arraysize();   
    int noise[sizearray];          

    randPopulate(noise, sizearray);   

    cout<<"\nOriginal set: "<<endl;
    print(noise, sizearray);          

    reverse(noise, sizearray);        

    cout<<"\nReversed set: "<<endl;
    print(noise, sizearray);          

    return 0;
}
