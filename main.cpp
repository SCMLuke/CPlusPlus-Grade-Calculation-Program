#include <iostream>
#include "Header Files/Student.h"
#include "Header Files/GradingPercentage.h"
#include "Header Files/startProgram.h"


int main() {
    std::vector<Student> students;
    GradingPercentage percentages(0.25,0.25,0.50);

    startProgram(students, percentages);
    return 0;
}
