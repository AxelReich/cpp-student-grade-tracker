#include <iostream>
#include <cstring>

using namespace std;

class Student{
public:
    // Constructor
    Student();
    Student(const string& fn, const string& ln, const string& c);
    // Destructor 
    virtual ~Student();

    //Getters 
    string GetFirstName() const;
    string GetLastName() const;
    string GetCourse() const;

    //Setter 
    void SetData();



protected:
        string firstName[21];
        string lastName[21];
        string course; 
};