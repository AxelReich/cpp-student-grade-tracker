#ifndef _COMPSCI_H
#define _COMPSCI_H

#include "Student.h"

class ComputerScience : public Student{
public:
    ComputerScience(string fn, string ln, string course, float h1, float h2, float h3, float h4, float h5, float h6, float t1, float t2, float fe);

    void GradeAvg();

    float GetGradeAvg() const;
    char  GetLetterGrade() const;
    float   GetFinalExam() const;

    

private:
    float prgHw;                                        // Average of the hws, This is the average of 6 homeworks.
    float test1, test2;                                 // 20% of the grade each of them
    float finalExam;                                    // 30% of the grade
    float avgGrade;
    char lettrGrade;
};

#endif