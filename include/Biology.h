#ifndef _BIOLOGY_H
#define _BIOLOGY_H

#include "Student.h"

class Biology : public Student{
public:
    Biology(string fn, string ln, string course, float lg, float t1, float t2, float t3, float fe);
    
    void GradeAvg();

    float GetGradeAvg() const;
    char  GetLetterGrade() const;
    float GetFinalExam() const;


private:
    float labGrade;                                     // 30% of the grade 
    float test1, test2, test3;                          // 15% of the grade each of them
    float finalExam;                                    // 25% of the grade
    float avgGrade;
    char lettrGrade;

};

#endif