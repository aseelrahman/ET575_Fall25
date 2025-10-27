/*
Aseel Rahman
Homework 5, Functions
Oct 24, 2025
*/

#include <iostream>
#include <cmath>
using namespace std;

// ----- Program 1: Wind Chill Calculation -----
int speed() {
    int s;
    do {
        cout << "Please type the wind speed in m/s: ";
        cin >> s;
        if (s <= 0 || s >= 100)
            cout << "Oops! The wind speed must be more than 0 and less than 100.\n";
    } while (s <= 0 || s >= 100);
    return s;
}

float temp() {
    float t;
    do {
        cout << "Now enter the temperature in Celsius (-90 to 10): ";
        cin >> t;
        if (t < -90 || t > 10)
            cout << "Sorry, temperature must be between -90 and 10.\n";
    } while (t < -90 || t > 10);
    return t;
}

float windspeed(int s, float t) {
    float wci = 13.12 + 0.6215*t - 11.37*pow(s,0.16) + 0.3965*t*pow(s,0.16);
    return wci;
}

void prompt_result(float wci) {
    cout << "Calculated wind chill index: " << wci << endl;
}

// ----- Program 2: Descending Order Entries -----
int collectNumber() {
    int n;
    cout << "Enter a number of your choice: ";
    cin >> n;
    return n;
}

bool inOrder(int a, int b, int c) {
    if (a > b && b > c)
        return true;
    else
        return false;
}

void runProgram(int a, int b, int c, bool desc) {
    if (desc)
        cout << "Great! The numbers are in descending order." << endl;
    else
        cout << "These numbers are NOT in descending order." << endl;

    char choice;
    cout << "Do you want to try again? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int x, y, z;
        cout << "Enter first number: ";
        x = collectNumber();
        cout << "Enter second number: ";
        y = collectNumber();
        cout << "Enter third number: ";
        z = collectNumber();
        runProgram(x,y,z,inOrder(x,y,z));
    }
}

// ----- Main Function -----
int main() {

    cout << "\n----- Program 1: Wind Chill -----" << endl;
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s,t));

    cout << "\n----- Program 2: Descending Order -----" << endl;
    int n1, n2, n3;
    cout << "Enter first number: ";
    n1 = collectNumber();
    cout << "Enter second number: ";
    n2 = collectNumber();
    cout << "Enter third number: ";
    n3 = collectNumber();
    bool desc = inOrder(n1,n2,n3);
    runProgram(n1,n2,n3,desc);

    return 0;
}
