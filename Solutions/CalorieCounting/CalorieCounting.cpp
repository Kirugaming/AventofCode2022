//
// Created by kirut on 12/1/2022.
//

#include <iostream>
#include <fstream>

int main() {

    std::ifstream input("Input/CalorieCountingInput.txt");
    if (!input) {
        std::cout << "::File failed to open::" << std::endl;
    }

    std::string line;
    int totalCalories = 0;
    int maxCalories = 0;

    while(std::getline(input, line)) {
        if (!line.empty()) {
            int calories = std::stoi(line);
            totalCalories += calories;
        } else {
            if (totalCalories > maxCalories) {
                maxCalories = totalCalories;
            }
            totalCalories = 0;
        }
    }

    std::cout << maxCalories << std::endl;




    input.close();
    return 0;
}

