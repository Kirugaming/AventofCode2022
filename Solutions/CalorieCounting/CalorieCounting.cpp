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
    int top1Calories = 0;
    int top2Calories = 0;
    int top3Calories = 0;

    // PART 1

    while(std::getline(input, line)) {
        if (!line.empty()) {
            int calories = std::stoi(line);
            totalCalories += calories;
        } else {
                // PART 2
                if (totalCalories > top3Calories) {
                    if (totalCalories > top2Calories) {
                        if (totalCalories > top1Calories) {
                            top3Calories = top2Calories;
                            top2Calories = top1Calories;
                            top1Calories = totalCalories;
                        } else {
                            top3Calories = top2Calories;
                            top2Calories = totalCalories;
                        }
                    } else {
                        top3Calories = totalCalories;
                    }
                }
                //

                //top1Calories = totalCalories;
            totalCalories = 0;
        }
    }

    std::cout << top1Calories << std::endl;
    std::cout << top1Calories + top2Calories + top3Calories << std::endl;

    // PART 2






    input.close();
    return 0;
}

