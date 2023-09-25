//
// Created by Mohamed El-Refai on 25/09/2023.
//

#ifndef HANGMAN_HANGFUNCTIONS_H
#define HANGMAN_HANGFUNCTIONS_H

#include <iostream>
#include <vector>

using namespace std;

void displayMisses(int misses); // Function to display the hangman figure based on the number of misses
void displayStatus(vector<char> incorrect, string answer); // Function to display incorrect guesses and the current state of the codeword
void endGame(string answer, string codeword); // Function to end the game and display the result

#endif //HANGMAN_HANGFUNCTIONS_H
