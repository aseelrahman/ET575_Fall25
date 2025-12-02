/*
Aseel Rahman
homework 10, word counts
 */
#include<iostream>
#include "hw10_functions_rahman.cpp"

using namespace std;

int main(){
    string filename = "Remembering_Earth.txt";

    cout<<"\n------ Display file ------"<<endl;
    displayfile(filename);

    cout<<"\n------ Count words ------"<<endl;
    countwords(filename);

    cout<<"\n------ Count word Earth ------"<<endl;
    countearth(filename);

    return 0;
}
