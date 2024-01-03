//
// Created by somec on 11/22/2023.
//

#include "../Header Files/Student.h"

Student::Student(const std::string firstName, const std::string lastName, int studentNumber, double gradeForMidterm1,
                 double gradeForMidterm2, double gradeForFinal) : firstName(firstName),
                                                                  lastName(lastName),
                                                                  studentNumber(studentNumber),
                                                                  gradeForMidterm1(gradeForMidterm1),
                                                                  gradeForMidterm2(gradeForMidterm2),
                                                                  gradeForFinal(gradeForFinal) {}
