//
// Created by somec on 11/22/2023.
//

#include <iostream>
#include "../Header Files/PrintIntro.h"
void printIntro() {
    //Print the intro message
    std::cout << "-------------------------------------------\n";
    std::cout << "1. Print all student data\n";
    std::cout << "2. Sort the list of students in alphabetical order of last name\n";
    std::cout << "3. Add a new student\n";
    std::cout << "4. Calculate the letter grade of all students\n";
    std::cout << "5. Change the information of a previous student\n";
    std::cout << "6. Print the data of a specific student\n";
    std::cout << "7. Remove a student from the list\n";
    std::cout << "8. Delete all student data\n";
    std::cout << "9. Change grading scheme\n";
    std::cout << "10. Exit program\n";
    std::cout << "-------------------------------------------\n";
}