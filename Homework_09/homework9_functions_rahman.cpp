/*
Aseel Rahman
Homework 9 – Arrays application
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int arraysize(){
    int size;
    cout<<"Enter an array size between 1 and 100: ";
    cin>>size;

    while(size < 1 || size > 100){
        cout<<"Invalid. Enter an array size between 1 and 100: ";
        cin>>size;
    }
    return size;
}

void randPopulate(int arr[], int sizearray){
    for(int i = 0; i < sizearray; i++){
        arr[i] = rand() % 21 + 10;  
    }
}

void print(int arr[], int sizearray){
    for(int i = 0; i < sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void reverse(int arr[], int sizearray){
    int left = 0;
    int right = sizearray - 1;

    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}
