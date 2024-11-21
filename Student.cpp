#include "Student.h"


// Constructor
Student::Student(){}
Student::Student(string fn, string ln, string c)
{
{
    if (fn.length() > 20 || ln.length() > 20 ) {
        std::cout << "Error: One or more parameters are invalid." << std::endl;
    } else {
        SetFirstName(fn);
        SetLastName(ln);
        SetCourse(c);
    }
}
}


//Getters 
string Student::GetFirstName() const {return firstName;}
string Student::GetLastName()  const {return lastName;}
string Student::GetCourse()    const {return course;}

//Setters 
void Student::SetFirstName(string fn) {
    if (fn.length() <= 20) {
        firstName = fn;
    }
}
void Student::SetLastName(string ln) {
    if (ln.length() <= 20) {
        lastName = ln;
    }
}
void Student::SetCourse(string c) {
    if (c == "Biology" || c == "Computer Science" || c == "Theater") {
        course = c;
    }
}

