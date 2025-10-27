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
    int x1 = 1;
    int y1 = 4;
    int x2 = 7;
    int y2 = 3;

    float d = calcDistance(x1, y1, x2, y2);
    printDistance(x1, y1, x2, y2, d);



    return 0;
}