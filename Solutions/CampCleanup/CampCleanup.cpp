//
// Created by kirut on 12/4/2022.
//


#include <fstream>
#include <iostream>

int main() {

    std::ifstream input("Input/CampCleanupInput.txt");
    if (!input) {
        std::cout << "::File failed to open::" << std::endl;
    }

    std::string line;
    int total = 0;


    while (std::getline(input, line)) {
        std::string range1 = line.substr(0, line.find(','));
        std::string range2 = line.substr(line.find(',') + 1, line.find(' '));

        int range1Min = std::stoi(range1.substr(0, range1.find('-')));
        int range1Max = std::stoi(range1.substr(range1.find('-') + 1, range1.length()));
        int range2Min = std::stoi(range2.substr(0, range2.find('-')));
        int range2Max = std::stoi(range2.substr(range2.find('-') + 1, range2.length()));

        // print ranges
        std::cout << range1Min << " " << range1Max << " " << range2Min << " " << range2Max << std::endl;


        // check if range1 contains range2
        if (range2Min >= range1Min && range2Min <= range1Max) {
            total++;
        }
        // check if range2 contains range1
        else if (range1Min >= range2Min && range1Min <= range2Max) {
            total++;
        }


    }


    std::cout << total << std::endl;

    return 0;
}
