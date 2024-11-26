#ifndef _STUDENT_LIST_H
#define _STUDENT_LIST_H

#include "Student.h"



class StudentList{
public:
    // Constructor
    StudentList();              // Make a empty list 
    // Destructor 
    ~StudentList();             // Deallocate data 


    bool ImportFile(const char* filename);      // Import the file .txt, if file not valid: return false;

    bool CreateReportFile(const char* filename);    // Create a grade report and write it to an output file, If output file cant open: return false;

    void ShowList() const;             // Print the current list of students, one per line. lastName, firstName, course.

private:
    Student** students;             // Dinamyc array of pointers array to students objects
    int currSize;

    void Resize(int newSize);
};

#endif