/*
Aseel Rahman
Aug 27, 2025
Lab 1, iostream
*/
// C++ library
#include <iostream>
using namespace std;

int main() 
{
    cout << "------ Example1: cout data ------"<<endl;
    cout<<"This is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare the variable first
    string username = "peterpan123";
    cout<<"\nWelcome to C++ \t\t"<<username<<endl;
    
    cout << "------ Example 2: cin data ------"<<endl;
    cout<<"Enter a new username: ";
    cin >> username;
    cout<<"New user is "<<username<<endl;

     cout << "------ Example 3: data type ------"<<endl;
     // declare variable
     char sym ='x';
     float distance = 5.63;
     int number = 8;

     cout<<"Given symbol = "<<sym<<endl;
     cout<<"Given distance = "<<distance<<endl;
     cout<<"Given numbrer = "<<number<<endl;

     cout << "------ EXERCISE ------"<<endl;
     //declare variables

     //collect data
     
     //

    return 0;
}