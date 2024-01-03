//
// Created by somec on 11/22/2023.
//

#include <iostream>
#include "../Header Files/PrintSpecificStudentData.h"

void printSpecificStudentData(std::vector<Student>& students, int& studentNumber) {
    for (const auto& student : students) {
        if (student.studentNumber == studentNumber) {
            std::cout << "-------------------------------------------\n";
            std::cout << "First Name: " << student.firstName << "\n";
            std::cout << "Last Name: " << student.lastName << "\n";
            std::cout << "Student Number: " << student.studentNumber << "\n";
            std::cout << "Midterm 1 Grade: " << student.gradeForMidterm1 << "\n";
            std::cout << "Midterm 2 Grade: " << student.gradeForMidterm2 << "\n";
            std::cout << "Final Grade: " << student.gradeForFinal << "\n";
            return; // Stop searching once the student is found
        }
    }

    std::cout << "Student with given student number not found!\n";
}