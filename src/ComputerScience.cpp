#include "../include/ComputerScience.h"



ComputerScience::ComputerScience(string fn, string ln, string course, float h1, float h2, float h3, float h4, float h5, float h6, float t1, float t2, float fe)
                :Student(fn, ln, "Computer Science")
{
    prgHw = (h1+h2+h3+h4+h5+h6)/6;    
    test1     = t1;
    test2     = t2;
    finalExam = fe;

    GradeAvg();
}

void ComputerScience::GradeAvg()
{
    avgGrade = (prgHw * 0.30) + ((test1 * 0.20) + (test2 * 0.20)) + (finalExam * 0.30);

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


float ComputerScience::GetGradeAvg() const   { return avgGrade; }
char ComputerScience::GetLetterGrade() const { return lettrGrade; }
float  ComputerScience::GetFinalExam() const { return finalExam; }


//Member Data
    // float progHw;                                       // 30% of the grade 
    // float test1, test2;                                 // 20% of the grade each of them
    // float finalExam;                                    // 30% of the grade
    // avgGrade
    // lettrGrade
