cmake_minimum_required(VERSION 3.26)
project(PROG2100_Final_Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(PROG2100_Final_Project main.cpp
        "Header Files/Student.h"
        "CPP Files/Student.cpp"
        "Header Files/PrintIntro.h"
        "CPP Files/PrintIntro.cpp"
        "Header Files/PrintAllStudentData.h"
        "CPP Files/PrintAllStudentData.cpp"
        "Header Files/AddNewStudent.h"
        "CPP Files/AddNewStudent.cpp"
        "Header Files/CalculateLetterGrade.h"
        "CPP Files/CalculateLetterGrade.cpp"
        "Header Files/ChangeInformation.h"
        "CPP Files/ChangeInformation.cpp"
        "Header Files/PrintSpecificStudentData.h"
        "CPP Files/PrintSpecificStudentData.cpp"
        "Header Files/RemoveStudent.h"
        "CPP Files/RemoveStudent.cpp"
        "Header Files/DeleteAllStudents.h"
        "CPP Files/DeleteAllStudents.cpp"
        "Header Files/ChangeGradingScheme.h"
        "CPP Files/ChangeGradingScheme.cpp"
        "Header Files/startProgram.h"
        "CPP Files/startProgram.cpp"
        "Header Files/GradingPercentage.h"
        "CPP Files/GradingPercentage.cpp"
        "Header Files/PrintAllStudentDataAlphabetical.h"
        "CPP Files/PrintAllStudentDataAlphabetical.cpp"
        "CPP Files/startProgram.cpp"
)
