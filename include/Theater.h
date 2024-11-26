#ifndef _THEATER_H
#define _THEATER_H

#include "Student.h"

class Theater : public Student{
public:
    Theater(string fn, string ln, string course, float p, float mt, float fe);
    
    void GradeAvg();

    float GetGradeAvg() const;
    char  GetLetterGrade() const;
    float   GetFinalExam() const;



private:
    float participation;                                // 40% of the grade 
    float midterm;                                      // 25% of the grade
    float finalExam;                                    // 35% of the grade
    float avgGrade;
    char lettrGrade;
};

#endif