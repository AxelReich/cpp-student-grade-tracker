#ifndef _STUDENT_H
#define _STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student{
public:
    // Constructor
    Student();
    Student(string fn, string ln, string c);

    virtual void GradeAvg()=0;

    //Getters 
    string GetFirstName() const;
    string GetLastName() const;
    string GetCourse() const;

    //Setters 
    void SetFirstName(string fn);
    void SetLastName(string ln);
    void SetCourse(string c);


protected:
        string firstName;           // Max 20 chars 
        string lastName;            // Max 20 chars 
        string course;              // Courses: Biology, Computer Science, Theater -> These would be the derived classes 
};

#endif