/*
Aseel Rahman
OCT 24, 2025
lab12: scoping, and predefined functions
*/
#include<iostream>
using namespace std;

// global variable
int num = 8;

void doSomething(){
    // global variable
    num += 20;
    cout<<"num in doSomething function: "<<num<<endl;
}

#include "lab12_functions.cpp"

int main(){
    cout<<"\n----- example 1: local variable -----"<<endl;
    int sum = add(3,7) + add(1,6);// sum is local variable in the
    cout<<"The total sum is \t"<<sum<<endl;

    cout<<"\n----- example 2: local variable -----"<<endl;
    cout<<"num original value = \t"<<num<<endl;
    doSomething();
    num = 5;
    cout<<"num in main function = \t"<<num<<endl;

    cout<<"\n----- example 3: hypotenuse -----"<<endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(2,3);
    printhyp(s1, s2, h);
    
    cout<<"\n ------ EXERCISE ------"<<endl;
    // int x1 = //call 1st function
    // int y1 = //call 1st finction
    // int x2 = //call 1st finction
    // int y2 = //call 1st finction

    // float d = // call 2nd function

    // // call 3ed function



    return 0;
}