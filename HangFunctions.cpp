//
// Created by Mohamed El-Refai on 25/09/2023.
//

#include <iostream>
#include <vector>
#include "HangFunctions.h"

using namespace std;

// Function to display the hangman figure based on the number of misses
void displayMisses(int misses){
    if (misses == 0) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    } else if (misses == 1){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    } else if (misses == 2) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    } else if (misses == 3) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    } else if (misses == 4) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    } else if (misses == 5) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    } else if (misses == 6){
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"  O   | \n";
            cout<<" /|\\  | \n";
            cout<<" / \\  | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
    }
}

// Function to display incorrect guesses and the current state of the codeword
void displayStatus(vector<char> incorrect, string answer){
    cout << "Incorrect guesses: ";

    // Displaying each incorrect guess
    for (char i : incorrect)
        cout << i << " ";

    cout << "\n\nCodeword\n";

    // Displaying each character in the codeword (either a letter or an underscore)
    for (char i : answer)
        cout << i << " ";
}

// Function to end the game and display the result
void endGame(string answer, string codeword){
    if (answer == codeword) {
        cout << "Awesome! You save the little person :D\n";
    } else {
        cout << "Very sad, the person is dead :(\n";
    }


}