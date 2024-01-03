//
// Created by somec on 11/22/2023.
//

#include <iostream>
#include <limits>
#include "../Header Files/ChangeInformation.h"
#include "../Header Files/Student.h"

void changeInformation(std::vector<Student>& students, int& studentNumber) {
    for (auto& student : students) {
        if (student.studentNumber == studentNumber) {

            int menuSelectionStudentInfo;
            std::string newFirstName;
            std::string newLastName;
            int newStudentNumber;
            double newGradeForMidterm1;
            double newGradeForMidterm2;
            double newGradeForFinal;

            std::cout << "-------------------------------------------\n";
            std::cout << "What information would you like to change?\n";
            std::cout << "1. First Name\n2. Last Name\n3. Student Number\n4. Midterm 1 Grade\n5. Midterm 2 Grade\n6. Final Grade\n";
            std::cin >> menuSelectionStudentInfo;
            switch (menuSelectionStudentInfo) {
                case 1:
                    std::cout << "Please enter a new first name:\n";
                    std::getline(std::cin, newFirstName);
                    student.firstName = newFirstName;
                    break;
                case 2:
                    std::cout << "Please enter a new last name:\n";
                    std::getline(std::cin, newLastName);
                    student.lastName = newLastName;
                    break;
                case 3:
                    std::cout << "Please enter a new student number:\n";
                    std::cin >> newStudentNumber;
                    student.studentNumber = newStudentNumber;
                    break;
                case 4:
                    std::cout << "Please enter a new grade for midterm 1:\n";
                    std::cin >> newGradeForMidterm1;
                    student.gradeForMidterm1 = newGradeForMidterm1;
                    break;
                case 5:
                    std::cout << "Please enter a new grade for midterm 2:\n";
                    std::cin >> newGradeForMidterm2;
                    student.gradeForMidterm2 =  newGradeForMidterm2;
                    break;
                case 6:
                    std::cout << "Please enter a new grade for final:\n";
                    std::cin >> newGradeForFinal;
                    student.gradeForFinal = newGradeForFinal;
                    break;
                default:
                    std::cout << "Invalid option. Please select a number between 1-6.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            return; // Stop searching once the student is found
        }
    }
    std::cout << "Student with given student number not found!\n";
}