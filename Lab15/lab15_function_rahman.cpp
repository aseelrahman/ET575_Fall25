/*
Aseel Rahman
Nov 12, 2025
lab 14: introduction to array, pointers and references
*/

#include<iostream>
#include<string>

using namespace std;

void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

    // declare the pointer
    int* pointerint;
    char* pointerchar;
    string* pointerstring;

    // testing the memory address
    cout<<"memory address of int"<<pointerint<<endl;

    //pointer with initial value. Value is the memory address of the pointed variable
    pointerint = &num;
    pointerchar = &c;
    pointerstring = &n;
    
    //check reference value of each pointer
    cout<<"Referance value int = "<<pointerint<<endl;
    cout<<"Referance value char = "<<pointerchar<<endl;
    cout<<"Referance value string = "<<pointerstring<<endl;

    // dereferance operators
    cout<<"Dereferance value int = "<<*pointerint<<endl;
    cout<<"Dereferance value char = "<<*pointerchar<<endl;
    cout<<"Dereferance value string = "<<*pointerstring<<endl;
}

// example 2
// function to print a value
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
    v = "inside printvalue function";
}

// function that passed a reference 
void printbyreference(string& v){
    cout<<"Passed by reference \t"<<v<<endl;
    v = "Updated sentence";
}

//function that passes a memory address
void printaddress(string* v){
    cout<<"Pass memory address = \t"<<v<<endl;
}

//example 3: arrays
void arrays(){
    // declare an array with five values
    int scores[5];

    // assiging/accessing individual cells in an array
    scores[0] = 60; // first value has index 0
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;


    cout<<"Array = \t"<<scores<<endl;
    cout<<"The third score is "<<scores[2]<<endl;
    int age_children[3] = {12,8,5};
    //initializing values to an array
    cout<<"THe 1st age = "<<age_children[0]<<endl;

    // When an array is declared with initial values, the size of the array can be omitted
    string names[]={"Annie","Peter","Carl","Charles","Brian"};
    cout<<"The fourth name is "<<names[3]<<endl;
}

void sizeofarrays(){
    cout<<"Size of char"<<sizeof(char)<<endl;
    cout<<"Size of int"<<sizeof(int)<<endl;
    cout<<"Size of double"<<sizeof(double)<<endl;
    cout<<"Size of string"<<sizeof(string)<<endl;

    int age_children[] = {2,8,5};
    cout<<"Total size of age_children \t"<<sizeof(age_children)<<endl;
    cout<<"Size of age_children \t"<<sizeof(age_children) / sizeof(age_children[0])<<endl;

}

// example 5: loop in an array
void looparray(){
    string names[]={"Annie","Peter","Carl","Charles","Brian"};
    int sizenames = sizeof(names)/sizeof(names[0]);
    int counter = 0;

    for(int i = 0; i<sizenames; i++ ){
        cout<<names[i]<<"\t";
        //count how many names has 5+ characters
        if(names[i].length() >= 5){
            counter ++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter<<" names with 5+ characters!"<<endl;
}

// EXERCISE
void exercise(){
    //declare an array with five values
    int scores[5];

    // assiging/accessing individual cells in an array
    scores[0] = 60; // first value has index 0
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;

    // set maximum scores[0];
    int maxscore = scores[0];

    int length = sizeof(scores) / sizeof(scores[0]);

    for(int i = 1; i < length; i++){
        if(scores[i] > maxscore){
            maxscore = scores[i];
        }
    }

    cout << "The maximum score is " << maxscore << endl;
    
}