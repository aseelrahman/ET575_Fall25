/*
Aseel Rahman
Nov 12, 2025
lab 14: introduction to array, pointers and references
*/

#include<iostream>
using namespace std;

#include "lab15_function_rahman.cpp"

int main(){
    cout<<"\n ----- Example 1: pointers -----"<<endl;
    pointer_ref();

    cout<<"\n ----- Example 2: pointers and reference in a function -----"<<endl;
    string something = "Hello World!";
    printvalue(something);
    printbyreference(something);
    printaddress(&something);
    printvalue(something);

    cout<<"\n ----- Example 3: array -----"<<endl;
    arrays();

    cout<<"\n ----- Exaple 4: array sizes ----- "<<endl;
    sizeofarrays();

    cout<<"\n ----- Example 5: loop in an array ----- "<<endl;
    looparray();

    cout<<"\n ----- EXERCISE ----- "<<endl;
    exercise();
    return 0;
}