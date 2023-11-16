/*Writing a C++ program 
using Switch…Case to determine the smallest number given
two numbers from a user.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Introducing variables for the two numbers
    double num1, num2, num3;

    // Capture two numbers from the user
    cout << "Enter the first number: "<<endl;
    cin >> num1;

    cout << "Enter the second number: "<<endl;
    cin >> num2;

    cout << "Enter the third number:"<<endl;
    cin  >> num3;

//Introducing choice variable
    char choice;
    switch (num1 < num2 || num2<num3 || num1 <num3) {
        // first switch case to decide which number is smaller.
        case true:
            choice = '1';
            break;
        case false:
            choice = '2';
            break;
    }

    switch (choice) {
        // Second switch case to output the smaller btw the two given.
        case '1':
            cout << "The smallest number is: " << num1 <<endl;
            break;
        case '2':
            cout << "The smallest number is: "<< num2 <<endl;
            break;
        case '3':
            cout << "The smallest number is:" << num3<< endl;
        default:
            cout << " All numbers are equal." <<endl;
    }

    return 0;
}
// code tested and debugged.