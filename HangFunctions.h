//
// Created by Mohamed El-Refai on 25/09/2023.
//

#ifndef HANGMAN_HANGFUNCTIONS_H
#define HANGMAN_HANGFUNCTIONS_H

#include <iostream>
#include <vector>

using namespace std;

void displayMisses(int misses);
void displayStatus(vector<char> incorrect, string answer);
void endGame(string answer, string codeword);

#endif //HANGMAN_HANGFUNCTIONS_H
