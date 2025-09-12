/*
Aseel Rahman
Lab 5, control flow
Sep 10, 2025
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ----- Example 1; bool variable -----"<<endl;
    //check if a number is positive
    //step 1) declare and collect a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // step 2) check if the number is positive
    bool checkpositive = n>0;
    //step 3) print the result
    cout<<"Is "<<n<<" positive? "<<checkpositive<<endl;

    cout<<"\n ----- Example 2: if statement -----"<<endl;
    //change the checking_code if a number is positive
    int checking_code = 111;
    if(n>=0){
        checking_code = 999;
    }
    cout<<"checking code = "<<checking_code<<endl;

    cout<<"\n ----- Example 3: if-else statement -----"<<endl;
    //check if a number is even or odd
    if(n%2 == 0){
        cout<<n<<" is EVEN"<<endl;
    }
    else{
        cout<<n<<" is ODD"<<endl;
    }

    cout<<"\n ----- Example 4: if-else statement -----"<<endl;
    //absolute value
    if(n>0){
        cout<<n<<"is positive"<<endl;
    }
    else{
        cout<<n<<" is negative"<<endl;
        n*= -1;
        cout<<"The absolute value is "<<n<<endl;
    }

    cout<<"\n ----- Example 5: multiway statement -----"<<endl;
    // select the color according to a waveloength
    int wavelength = 0;
    string emiited_color ="";
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
    // multiway conditional statement
    if( 0<=wavelength && wavelength<=379)
        emiited_color = "ultraviolet";
    else if( 380<=wavelength && wavelength<=520)
        emiited_color = "blue";
    else if( 521<=wavelength && wavelength<=590)
        emiited_color = "green";
    else if( 591<=wavelength && wavelength<=740)
        emiited_color = "red";
    else if(wavelength>=741)
        emiited_color = "infrared";
    else
        emiited_color = "unable to read";

    // print result
    cout<<"The emitted color of wavelength "<<wavelength<< " is "<<emiited_color<<endl;

    cout<<"\n ----- EXERCISE -----"<<endl;
    // declare variables
    string gpa = "";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;
    // collect the values for final_exam, labs, and homework
    cout << "Enter Final Exam grade: ";
    cin >> final_exam;
    cout << "Enter Labs grade: ";
    cin >> labs;
    cout << "Enter Homework grade: ";
    cin >> homework;
    // calculate the grade
    grade = final_exam * 0.5 + labs * 0.3 + homework * 0.2;
    // multiway conditional statement
    if (grade >= 90 && grade <= 100) {
        gpa = "A";
    }
    else if (grade >= 80 && grade <= 89) {
        gpa = "B";
    }
    else if (grade >= 70 && grade <= 79) {
        gpa = "C";
    }
    else if (grade >= 60 && grade <= 69) {
        gpa = "D";
    }
    else if (grade < 60) {
        gpa = "F";
    }
    else {
        gpa = "";
    }
    // print result
    cout << "A final grade of " << grade << " is equivalent to a GPA of " << gpa << endl;
    
    return 0;
}