//
// Created by somec on 11/23/2023.
//

#include <iostream>
#include <limits>
#include "../Header Files/startProgram.h"
#include "../Header Files/PrintIntro.h"
#include "../Header Files/PrintAllStudentData.h"
#include "../Header Files/AddNewStudent.h"
#include "../Header Files/DeleteAllStudents.h"
#include "../Header Files/PrintSpecificStudentData.h"
#include "../Header Files/CalculateLetterGrade.h"
#include "../Header Files/PrintAllStudentDataAlphabetical.h"
#include "../Header Files/ChangeGradingScheme.h"
#include "../Header Files/ChangeInformation.h"
#include "../Header Files/RemoveStudent.h"

void startProgram(std::vector<Student>& students, GradingPercentage percentages) {

    int menuSelection;

    while (true) {
        std::cout << "Welcome to the Student Information System. Please enter an option found below. \n";
        printIntro();
        std::cin >> menuSelection;

        switch (menuSelection) {
            case 1:
                printAllStudentData(students);
                break;
            case 2:
                printAllStudentDataAlphabetical(students);
                break;
            case 3:
                addNewStudent(students);
                break;
            case 4:
                calcLetterGrade(students,percentages);
                break;
            case 5:
                int choiceChange;
                std::cout << "Please enter the student ID of the student you wish to change information:\n";
                std::cin >> choiceChange;
                changeInformation(students,choiceChange);
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            case 6:
                int choiceCheck;
                std::cout << "Please enter the student ID of the student you wish to check:\n";
                std::cin >> choiceCheck;
                printSpecificStudentData(students,choiceCheck);
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            case 7:
                int choiceDelete;
                std::cout << "Please enter the student ID of the student you wish to delete:\n";
                std::cin >> choiceDelete;
                removeStudent(students,choiceDelete);
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            case 8:
                deleteAllStudents(students);
                break;
            case 9:
                changeGradingScheme(percentages);
                break;
            case 10:
                return;
                break;
            default:
                std::cout << "Invalid option. Please select a number between 1-10.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}