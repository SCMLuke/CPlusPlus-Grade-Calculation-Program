//
// Created by somec on 11/22/2023.
//

#include <iostream>
#include <limits>
#include "../Header Files/AddNewStudent.h"
void addNewStudent(std::vector<Student>& students) {
    std::string firstName;
    std::string lastName;
    int studentNumber;
    double gradeForMidterm1;
    double gradeForMidterm2;
    double gradeForFinal;

    // First name entry.
    std::cout << "Please enter the student's first name: \n";
    while (!(std::cin>>firstName)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Last name entry.
    std::cout << "Please enter the student's last name: \n";
    while (!(std::cin>>lastName)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Student number entry.
    std::cout << "Please enter the student's ID number: \n";
    while (!(std::cin>>studentNumber)) {
        std::cout << "Invalid input! Please enter numbers only!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Grade for midterm 1 entry.
    std::cout << "Please enter the student's grade for midterm 1: \n";
    while (!(std::cin>>gradeForMidterm1)) {
        std::cout << "Invalid input! Please enter numbers only!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Grade for midterm 2 entry.
    std::cout << "Please enter the student's grade for midterm 2: \n";
    while (!(std::cin>>gradeForMidterm2)) {
        std::cout << "Invalid input! Please enter numbers only!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Grade for final entry.
    std::cout << "Please enter the student's grade for the final: \n";
    while (!(std::cin>>gradeForFinal)) {
        std::cout << "Invalid input! Please enter numbers only!";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    students.push_back(Student(firstName,lastName,studentNumber,gradeForMidterm1,gradeForMidterm2,gradeForFinal));
    std::cout << "Thank you! Student data has been entered!" << std::endl;

}