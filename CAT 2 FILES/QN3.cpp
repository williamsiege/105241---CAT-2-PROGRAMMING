#include <iostream>
#include <string>
using namespace std;

string username;
string password;
int choice ;   
void myFunction(){
    
    cout<< "Welcome to my Simple app. Select an action to Perform \n";
    cout << " 1. Go to about Us Page "<<endl;
    cout << " 2. Go to Services Page"<< endl;
    cout << " 3. Go to full Profile Page"<< endl;
    cout <<" 4. LOGout "<<endl;
    cout << "Enter from choice 1 to 4 ";
    cin >> choice;
}

int main()
{
 cout << "Please enter the username: "<<endl;
 cin >> username;
 cout << "PLease enter the password : "<< endl;
 cin >>password;

 if(username=="WILLSPHINX" && password== "123WILL34"){
    myFunction();

    switch(choice){
        case 1: {
            // about us page 
            cout << " My name is William \n";
            cout << "I love C++ coding since it has enabled me to program in C++"<<endl;
            break;
        }
        case 2 : {
            // Go to Services Page 
            cout << "I can write source code for you and charge at a fair price"<< endl;
            break;
        }
        case 3 :{
            // Go to Full Profile Page 
        }
    }
 }



}
