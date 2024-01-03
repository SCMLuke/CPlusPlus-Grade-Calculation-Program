//
// Created by somec on 11/22/2023.
//

#include <iostream>
#include "../Header Files/CalculateLetterGrade.h"
void calcLetterGrade(std::vector<Student>& students, GradingPercentage percentages) {
    double overallGrade;
    char letterGrade;
    for (const auto& student : students) {
        overallGrade = (student.gradeForMidterm1*percentages.midterm1Percentage) + (student.gradeForMidterm2*percentages.midterm2Percentage) + (student.gradeForFinal*percentages.finalPercentage);
        if (overallGrade > 90) {
            letterGrade = 'A';
        } else if (overallGrade > 80 || overallGrade <= 90) {
            letterGrade = 'B';
        } else if (overallGrade > 70 || overallGrade <= 80) {
            letterGrade = 'C';
        } else if (overallGrade >= 60 || overallGrade <= 70) {
            letterGrade = 'D';
        } else {
            letterGrade = 'F';
        }
        std::cout << "Overall grade for: " << student.firstName << " " << student.lastName << ": " << overallGrade << " Letter grade: " << letterGrade << "\n";

    }
}