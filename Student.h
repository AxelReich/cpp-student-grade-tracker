#include <iostream>
#include <cstring>

using namespace std;

class Student{
public:
    // Constructor
    Student();
    Student(const char* fn, const char* ln, const char* c);

    //Getters 
    const char* GetFirstName() const;
    const char* GetLastName() const;
    const char* GetCourse() const;


protected:
        char firstName[21];           // Max 20 chars 
        char lastName[21];            // Max 20 chars 
        char course[20];              // Courses: Biology, Computer Science, Theater -> These would be the derived classes 
};