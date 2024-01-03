//
// Created by somec on 11/22/2023.
//

#include <algorithm>
#include <iostream>
#include "../Header Files/RemoveStudent.h"
void removeStudent(std::vector<Student>& students, int& studentNumber) {
    for (auto& student : students) {
        if (student.studentNumber == studentNumber) {

            auto it = std::remove_if(students.begin(), students.end(), [studentNumber](const Student& student) {
                return student.studentNumber == studentNumber;
            });

            students.erase(it, students.end());
        }

            return; // Stop searching once the student is found
        }
    std::cout << "Student with given student number not found!\n";
    }
