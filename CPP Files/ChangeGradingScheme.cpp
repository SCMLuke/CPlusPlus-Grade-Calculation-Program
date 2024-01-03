//
// Created by somec on 11/22/2023.
//

#include <iostream>
#include <limits>
#include "../Header Files/ChangeGradingScheme.h"

void changeGradingScheme(GradingPercentage& percentages) {
    double newMidterm1Percentage;
    double newMidterm2Percentage;
    double newFinalPercentage;

    double oldMidterm1Percentage = percentages.midterm1Percentage;
    double oldMidterm2Percentage = percentages.midterm2Percentage;
    double oldFinalPercentage = percentages.finalPercentage;

    std::cout << "Please enter a new percentage for the first midterm:\n";
    while (!(std::cin >> newMidterm1Percentage)) {
        std::cout << "Invalid input! Please enter numbers only!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Please enter a new percentage for the second midterm:\n";
    while (!(std::cin >> newMidterm2Percentage)) {
        std::cout << "Invalid input! Please enter numbers only!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Please enter a new percentage for the final:\n";
    while (!(std::cin >> newFinalPercentage)) {
        std::cout << "Invalid input! Please enter numbers only!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    percentages.midterm1Percentage = newMidterm1Percentage;
    percentages.midterm2Percentage = newMidterm2Percentage;
    percentages.finalPercentage = newFinalPercentage;

    if ((percentages.midterm1Percentage+percentages.midterm2Percentage+percentages.finalPercentage) == 1) {
        std::cout << "Successfully updated grading scheme!\n";
    } else {
        std::cout << "Please enter values that total to 1.\n";
        percentages.midterm1Percentage = oldMidterm1Percentage;
        percentages.midterm2Percentage = oldMidterm2Percentage;
        percentages.finalPercentage = oldFinalPercentage;
    }


}