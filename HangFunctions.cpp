//
// Created by Mohamed El-Refai on 25/09/2023.
//

#include <iostream>
#include <vector>
#include "HangFunctions.h"

using namespace std;

void displayMisses(int misses){
    switch (misses) {
        case 0:
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
        case 1:
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"  O   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
        case 2:
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"  O   | \n";
            cout<<"  |   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
        case 3:
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"  O   | \n";
            cout<<" /|   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
        case 4:
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"  O   | \n";
            cout<<" /|\\  | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
        case 5:
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"  O   | \n";
            cout<<" /|\\  | \n";
            cout<<" /    | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
        case 6:
            cout<<"  +---+ \n";
            cout<<"  |   | \n";
            cout<<"  O   | \n";
            cout<<" /|\\  | \n";
            cout<<" / \\  | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
    }
}

void displayStatus(vector<char> incorrect, string answer){
    cout << "Incorrect guesses: \n";

    for (int i = 0; i < incorrect.size(); i++){
        cout << incorrect[i] << " ";
    }

    cout << "\nCodeword\n";

    for (int i = 0; i < answer.length(); i++){
        cout << answer[i] << " ";
    }
}
