// developing a program that generates all prime numbers up to user specified limit.
#include <iostream>
#include <string>
using namespace std;

bool Prime (int number){
    if (number <= 1){
        return false;
    }
for(int i = 2; i * i <= number ; ++i){
    if (number % i == 0){
        return false;
    }
    return true;
}

}


int main() {
    int limit ;

    cout << " Enter a prime Number limit to reach ::";
    cin >> limit;

    cout << " The Prime Numbers upto "<<limit<< "prime numbers being ";
    for (int i = 2; i <= limit; ++i)
    {
        if (Prime(i)){
            cout<< i <<",";
        }
        return 0;
    }


return 0;
}