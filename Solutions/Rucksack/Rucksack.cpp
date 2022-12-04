//
// Created by kirut on 12/3/2022.
//

#include <iostream>
#include <fstream>
#include <map>

int main() {

    std::ifstream input("Input/RucksackInput.txt");
    if (!input) {
        std::cout << "::File failed to open::" << std::endl;
    }

    std::string line1;
    std::string line2;
    std::string line3;

    std::map<char, int> letterValues {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            {'d', 4},
            {'e', 5},
            {'f', 6},
            {'g', 7},
            {'h', 8},
            {'i', 9},
            {'j', 10},
            {'k', 11},
            {'l', 12},
            {'m', 13},
            {'n', 14},
            {'o', 15},
            {'p', 16},
            {'q', 17},
            {'r', 18},
            {'s', 19},
            {'t', 20},
            {'u', 21},
            {'v', 22},
            {'w', 23},
            {'x', 24},
            {'y', 25},
            {'z', 26},
            {'A', 27},
            {'B', 28},
            {'C', 29},
            {'D', 30},
            {'E', 31},
            {'F', 32},
            {'G', 33},
            {'H', 34},
            {'I', 35},
            {'J', 36},
            {'K', 37},
            {'L', 38},
            {'M', 39},
            {'N', 40},
            {'O', 41},
            {'P', 42},
            {'Q', 43},
            {'R', 44},
            {'S', 45},
            {'T', 46},
            {'U', 47},
            {'V', 48},
            {'W', 49},
            {'X', 50},
            {'Y', 51},
            {'Z', 52}
    };

    int total = 0;

    while (std::getline(input, line1)) {
        std::getline(input, line2);
        std::getline(input, line3);

        for (char & i : line1) {
            if (line2.find(i) != std::string::npos && line3.find(i) != std::string::npos) {
                std::cout << "Found " << i << letterValues[i]  << std::endl;
                total += letterValues[i];
                break;
            }
        }
    }

    std::cout << total << std::endl;
}