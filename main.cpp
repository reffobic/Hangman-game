

// Done by Mohamed El Refai git: @reffobic

#include <iostream>
#include <vector>
#include "HangFunctions.h"

using namespace std;

int main(){

    cout << "=============== Hangman Game ===============\n";
    cout << "You need to guess the letters in the codeword to save your friend from being hanged!\n";

    string codeword = "radiohead";
    string answer = "_________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while(answer != codeword && misses <7){
        displayMisses(misses);
        displayStatus(incorrect, answer);
    }
}
