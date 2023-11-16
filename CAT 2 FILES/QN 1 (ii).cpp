// determine if a year is a leap year.
#include <iostream>
#include <string>
using namespace std;

int main()
{
long int year;
// creating input for the user to enter the year.
cout << "Please enter year to determine if it is a leap year";
cin >> year;

if (year % 4 == 0 && year % 100 != 0 || year %400 == 0)// determining if year was a leap year.
{
    cout << " The year mentioned was a leap year: "<< year<<endl;

}else {cout << "THe year was not a leap year:"<<year <<endl;}

return 0;
}
