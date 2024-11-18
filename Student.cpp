#include "Student.h"


// Constructor
Student::Student()
{
}
Student::Student(const char* fn, const char* ln, const char* c)
{
    if (strlen(fn) <= 20 && strlen(ln) <= 20 && 
    (strcmp(c, "Biology") == 0 || strcmp(c, "Theater") == 0 || strcmp(c, "Computer Science") == 0)) {
        strcpy(firstName, fn);
        strcpy(lastName, ln);
        strcpy(course, c);
    }
    // Else: invalid error or set to default????
}


//Getters 
const char* Student::GetFirstName() const {return firstName;}
const char* Student::GetLastName()  const {return lastName;}
const char* Student::GetCourse()    const {return course;}


