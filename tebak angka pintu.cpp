#include <iostream>

using namespace std;

int main() {
    // Store the secret code
    int secretCode = 7;
    // Maximum number of attempts
    int maxAttempts = 3;
    // Variable to store the player's guess
    int guess;
    // Loop through the attempts
    for (int attempt = 1; attempt <= maxAttempts; attempt++) {
        // Ask the player to guess the number
        cout << "Percobaan " << attempt << "/" << maxAttempts << " - Tebak: ";
        cin >> guess;

        // Check if the guess is correct
        if (guess == secretCode) {
            // If the guess is correct, print "Benar!" and end the program
            cout << "Benar!" << endl;
            return 0;
        } else {
            // If the guess is incorrect, print "Salah!"
            cout << "Salah!" << endl;
        }
    }

    // If the player has used all attempts, print "Kalah! Angka = 7"
    cout << "Kalah! Angka = " << secretCode << endl;

    return 0;
}
