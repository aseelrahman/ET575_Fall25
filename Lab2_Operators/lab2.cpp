/*
Aseel Rahman
Lab 2, operators
Sep 2, 2025
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ example 1: arithmetic operator ------ "<<endl;
    // set number format
    cout.setf(ios::fixed);
    cout.precision(3);
    // calculate the height of a free falling object
    // free_fall = 0.5*gravity*time*time
    // declare a constant variable named 'gravity'
    const float GRAVITY = 9.8;
    // declare variable height and time
    float height = 0, time = 0;
    // collect the fallling time
    cout<<"Enter a falling time in seconds: ";
    cin>>time;
    // calculate the height of a free fall object
    height = 0.5*GRAVITY*time*time;
    // print results
    cout<<"The height of a free fall object at" <<time<<" second is "<< height << " meters." <<endl;

    cout<<"\n------ example 2: assignment operator ------ "<<endl;
    int number1 = 10;
    int number2 = 3;
    cout<<"original number1 = "<<number1<<endl;
    number1 ++;
    cout<<"updated number1 = "<<number1<<endl;
    cout<<"original number2 = "<<number2<<endl;
    number2 --;
    cout<<"updated number2 = "<<number2<<endl;
    number2 += 5;
    cout<<"updated number2 by 5 = "<<number2<<endl;
    number1 *=2;
    cout<<"updated number1 using *=2 --> "<<number1<<endl;

    cout<<"The remainder of "<<number1<<" and " << number2 <<" is "<<number1%number2<<endl;
    cout<<"number1 = "<<number1<<endl;
    cout<<"number2 = "<<number2<<endl;

    number1 %=number2;
    cout<<"after %=, number1 = "<<number1<<endl;
    cout<<"after %=, number2 = "<<number2<<endl;

    cout<<"\n------ example 3: comparison operator ------ "<<endl;
    cout<<"is number1 equal to number2? "<<(number1 == number2)<< endl;
    cout<<"is number1 greater than number2? "<<(number1 > number2)<< endl;
    cout<<"is number1 less than number2? "<<(number1 < number2)<< endl;
    cout<<"is number1 not equal to number2? "<<(number1 != number2)<< endl;

    cout<<"\n------ example 4: logical operator ------ "<<endl;
    // AND operator
    bool check_numbers = (number1 != number2) && (number1 < number2) && (number1 > 5);
    // number1 != number2 --> true
    // number1 < number2 --> true
    // number1>5 --> false
    // check_numbers = true && true && false = false (0)
    cout<<"The result of check_number is "<<check_numbers<<endl;

    // OR operator
    bool check_or = (number2 > 10) || (number2 != 3) || (number2 < number1);
    // number2 > 10 --> false
    // number2 != 3 --> true
    // number2 < number1 --> false
    // false || true || false = true (1)
    cout<<"The result of check_or is "<<check_or<<endl;

    cout<<"\n------ example 4: casting ------ "<<endl;
    int n = 5;
    float m = n/2;

    cout<<"implicit casting = "<<m<<endl;

    cout<<"\n ------ EXERCISE ------"<<endl;
    return 0;
}