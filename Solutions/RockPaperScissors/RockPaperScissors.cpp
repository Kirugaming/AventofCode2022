//
// Created by kirut on 12/1/2022.
//

#include <fstream>
#include <iostream>
#include <map>

// PART 1
// Rock A, X = 1
// Paper B, Y = 2
// Scissors C, Z = 3
// PART 2
// Rock A = 1
// Paper B = 2
// Scissors C = 3
// Loss X
// Draw Y
// Win Z

int play(char opponentPlay, char outcome) {

    std::cout << "Opponent Play: " << opponentPlay << " Outcome: " << outcome << std::endl;

    // draw
    if (opponentPlay == 'A' && outcome == 'Y') {
        return 1 + 3;
    }
    if (opponentPlay == 'B' && outcome == 'Y') {
        return 2 + 3;
    }
    if (opponentPlay == 'C' && outcome == 'Y') {
        return 3 + 3;
    }
    // loss
    if (opponentPlay == 'B' && outcome == 'X') {
        return 1 + 0;
    }
    if (opponentPlay == 'C' && outcome == 'X') {
        return 2 + 0;
    }
    if (opponentPlay == 'A' && outcome == 'X') {
        return 3 + 0;
    }
    // win
    if (opponentPlay == 'C' && outcome == 'Z') {
        return 1 + 6;
    }
    if (opponentPlay == 'A' && outcome == 'Z') {
        return 2 + 6;
    }
    if (opponentPlay == 'B' && outcome == 'Z') {
        return 3 + 6;
    }

    return 0;

}

int main() {

    std::ifstream input("Input/RockPaperScissorsInput.txt");
    if (!input) {
        std::cout << "::File failed to open::" << std::endl;
    }

    std::string line;

    int roundScore = 0;
    int totalScore = 0;

    while (std::getline(input, line)) {
        char opponentPlay = line[0];
        char outcome = line[2];

        totalScore += play(opponentPlay, outcome);


    }

    std::cout << totalScore << std::endl;

    return 0;
}