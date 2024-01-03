//
// Created by somec on 11/22/2023.
//

#ifndef PROG2100_FINAL_PROJECT_STUDENT_H
#define PROG2100_FINAL_PROJECT_STUDENT_H


#include <string>

struct Student {
    std::string firstName;
    std::string lastName;
    int studentNumber;
    double gradeForMidterm1;
    double gradeForMidterm2;
    double gradeForFinal;

    Student(const std::string firstName, const std::string lastName, int studentNumber, double gradeForMidterm1, double gradeForMidterm2, double gradeForFinal);
};


#endif //PROG2100_FINAL_PROJECT_STUDENT_H
