/*
Aseel Rahman
OCT 24, 2025
lab12: scoping, and predefined functions
*/
#include<iostream>
#include<cmath>

using namespace std;

//example 1: function that calculates and returns the sum of two numbers
int add(int num1, int num2){
    int sum = num1 + num2; // sum is a local vriable in function add()
    cout<<"the sum is function add() is \t"<<sum<<endl;
    return sum;
}

// example 3: c++ predefine functions
// function passes two arguments, calculates and returns the hypotenuse of a right triangle
float hyp(float side1, float side2){
    return sqrt(pow(side1, 2)+ pow(side2, 2));
}

//function to print result
void printhyp(float s1, float s2, float h){
    cout<<"The hypotunese of side "<<s1<<" and "<<s2<<" is "<<h<<endl;
}

//Exercise
//function to collect a number greater than 0

//function to calculate the distance of four point

//function to print the result