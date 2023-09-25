

// Done by Mohamed El Refai git: @reffobic

#include <iostream>
#include <vector>
#include "HangFunctions.h" // including the custom header file

using namespace std;

int main(){

    // Printing out game information and instructions
    cout << "\n=============== Hangman Game ===============\n";
    cout << "You need to guess the letters in the codeword to save your friend from being hanged!\n";
    cout << "You have seven six tries ;)\n\n";

    // Initializing game variables
    string codeword = "radiohead";
    string answer = "_________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter, input;

    while(answer != codeword && misses <7){
        displayMisses(misses);
        displayStatus(incorrect, answer); // Displaying current state of game

        cout << "\n------------------------";
        cout << "\nEnter your guess: ";
        cin >> input;
        letter = tolower(input);

        // Checking if the guessed letter is in the codeword
        for (int i = 0; i < codeword.length(); i++){
            if (letter == codeword[i]){
                answer[i] = letter;
                guess = true;
            }
        }

        // Handling correct or incorrect guesses
        if (guess == true){
            cout << "\nCorrect!\n\n";
        } else {
            cout << "\nIncorrect! Help your person :'(\n\n";
            incorrect.push_back(letter);
            misses ++;
        }
        guess = false; // Resetting guess flag
    }

    endGame(answer, codeword); // Ending the game and displaying the result

    return 0;
}
