

// Done by Mohamed El Refai git: @reffobic

#include <iostream>
#include <vector>
#include "HangFunctions.h"

using namespace std;

int main(){

    cout << "\n=============== Hangman Game ===============\n";
    cout << "You need to guess the letters in the codeword to save your friend from being hanged!\n";
    cout << "You have seven six tries ;)\n\n";

    string codeword = "radiohead";
    string answer = "_________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter, input;


    while(answer != codeword && misses <7){
        displayMisses(misses);
        displayStatus(incorrect, answer);
        cout << "\n------------------------";
        cout << "\nEnter your guess: ";
        cin >> input;
        letter = tolower(input);

        for (int i = 0; i < codeword.length(); i++){
            if (letter == codeword[i]){
                answer[i] = letter;
                guess = true;
            }
        }

        if (guess == true){
            cout << "\nCorrect!\n\n";
        } else {
            cout << "\nIncorrect! Help your person :'(\n\n";
            incorrect.push_back(letter);
            misses ++;
        }

        guess = false;
    }

    endGame(answer, codeword);

    return 0;
}
