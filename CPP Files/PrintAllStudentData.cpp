//
// Created by somec on 11/22/2023.
//

#include <iostream>
#include "../Header Files/PrintAllStudentData.h"

void printAllStudentData(std::vector<Student>& students) {
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