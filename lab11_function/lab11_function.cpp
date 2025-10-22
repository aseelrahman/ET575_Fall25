/*
Aseel Rahman
Lab 11, introduction to function
*/
#include<iostream>

using namespace std;  

// Example 1: void function does not return any value
void printhello(){
    cout<<"Hello function!"<<endl;
    return;
}

// Example 2: void function with parameters
void greeting(string name){
    cout<<"Good afternoon "<<name<<endl;
    return;
}

// Example 3: function that returns an integer(whole number)
int returnfive(){
    return 5;
}

// Example 4: any coe after the return will not be executed
void printsome(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;
}

int somenumber(){
    int num = 10;
    return num;
    num *=2;
    return num;

}

// Example 5: function that calculates and returns the area of a square
float areasquare(float side){
    float area = side*side;
    return area;
}

// Example 6: function that calculates and returns the product of two numbers
int product( int n1, int n2){
    return n1*n2;
}

// Example 7: function that calculates and returns the farenheit temperature
double fah(double celsius){
    return celsius*1.8 + 32;
}

void printfah(double f){
    cout<<"The fahrenheit temerature is: "<<f<<endl;
}

// Example 8: check a number
string checknumber(int number){
    if(number== 0){
        return "zero";
    }
    else if(number>0){
        return "postivie";
    }
    else{
        return "negative";
    }
}

void printnumber(int x,string n){
    cout<<"Number "<<x<<" is "<<n<<endl;
}