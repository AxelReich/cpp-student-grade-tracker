#include "../include/Student.h"

// I should add the condition that if the first or last name is more than 20 chars or the courses are not them, then does not create it
// Constructor
Student::Student(){}
Student::Student(string fn, string ln, string c)
{
    // HERE I SHOULD ADD TO SEE IF FN IS LESS THAN THE EXPECtED
    SetFirstName(fn);
    SetLastName(ln);
    SetCourse(c);
}
Student::~Student(){}

//Getters 
string Student::GetFirstName() const {return firstName;}
string Student::GetLastName()  const {return lastName;}
string Student::GetCourse()    const {return course;}

//Setters 
void Student::SetFirstName(string fn) {
    firstName = fn;

}
void Student::SetLastName(string ln) {
    lastName = ln;
    
}
void Student::SetCourse(string c) {
    course = c;
    
}

