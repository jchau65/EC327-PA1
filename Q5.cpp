#include <iostream>
using namespace std;

int main() {
    // Initializing variables
    char letter;
    int offset = 'a' - 'A';

    // Ask user for letter
    cout << "Enter a letter: ";
    cin >> letter;

    // Check if letter is valid
    if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122)) {
        // Check if letter is uppercase, if so, convert it to uppercase
        if (letter >= 97) {
            letter -= offset;
        }
        
        // Check if letter is Z, if so, print out A
        if (letter + 1 > 90) {
            cout << "CRYPTO: "<< 'A';
        }
        else {
            cout << "CRYPTO: " << (char) (letter + 1);
        }
    }
    
    else {
        cout << "YOU DID NOT ENTER A LETTER";
    }
}