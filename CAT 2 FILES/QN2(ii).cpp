#include <iostream>
using namespace std;

int main() {
    char character;

    // Input character from the user
    cout << "Enter a character: ";
    cin >> character;

    // Convert the character to lowercase for easy comparison
    char lowercaseCh = tolower(character);

    // Check if the character is a vowel or a consonant
    if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
        cout << character << " is a vowel." << endl;
    } else if ((lowercaseCh >= 'a' && lowercaseCh <= 'z') && !((lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u'))) {
        cout << character << " is a consonant." << endl;
    } else {
        cout << character << " is not a valid alphabet character." << endl;
    }

    return 0;
}