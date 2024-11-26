#include "../include/Biology.h"



Biology::Biology(string fn, string ln, string course, float lg, float t1, float t2, float t3, float fe)
        :Student(fn, ln, "Biology")
{
    labGrade  = lg;
    test1     = t1;
    test2     = t2;
    test3     = t3;
    finalExam = fe;

    GradeAvg();
}

void Biology::GradeAvg()
{
    avgGrade = (labGrade * 0.3) + ((test1 * 0.15) + (test2 * 0.15) + (test3 * 0.15)) + (finalExam * 0.25);
    
    if (avgGrade >= 90) {
        lettrGrade = 'A';
    } else if (avgGrade >= 80) {
        lettrGrade = 'B';
    } else if (avgGrade >= 70) {
        lettrGrade = 'C';
    } else if (avgGrade >= 60) {
        lettrGrade = 'D';
    } else {
        lettrGrade = 'F';
    }
}

float Biology::GetGradeAvg() const    {return avgGrade; }
char  Biology::GetLetterGrade() const {return lettrGrade; }
float  Biology::GetFinalExam() const { return finalExam; }




//Member Data 
    // float labGrade;                                     // 30% of the grade 
    // float test1, test2, test3;                          // 15% of the grade each of them
    // float finalExam;                                    // 25% of the grade
    // avgGrade
    // lettrGrade
