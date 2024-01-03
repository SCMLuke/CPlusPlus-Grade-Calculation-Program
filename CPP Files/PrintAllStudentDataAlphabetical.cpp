//
// Created by somec on 11/23/2023.
//

#include <algorithm>
#include <iostream>
#include "../Header Files/PrintAllStudentDataAlphabetical.h"
void printAllStudentDataAlphabetical(std::vector<Student>& students) {

    auto operatorLess = [](const Student& studentForComparison1, const Student& studentForComparison2) {
        if (studentForComparison1.lastName == studentForComparison2.lastName) {
            return studentForComparison1.firstName < studentForComparison2.firstName;
        }
        return studentForComparison1.lastName < studentForComparison2.lastName;
    };

    std::sort(students.begin(), students.end(), operatorLess);

    for (const auto& student : students) {
        std::cout << "-------------------------------------------\n";
        std::cout << student.firstName << "\n";
        std::cout << student.lastName << "\n";
        std::cout << student.studentNumber << "\n";
        std::cout << student.gradeForMidterm1 << "\n";
        std::cout << student.gradeForMidterm2 << "\n";
        std::cout << student.gradeForFinal << "\n";
    }
}