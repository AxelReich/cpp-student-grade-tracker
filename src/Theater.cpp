#include "../include/Theater.h"
    
    
    
Theater::Theater(string fn, string ln, string course, float p, float mt, float fe)
        :Student(fn, ln, "Theater")
{

    participation = p;
    midterm       = mt;
    finalExam     = fe;

    GradeAvg();
}

void Theater::GradeAvg()
{
    avgGrade = (participation * 0.4) + (midterm * 0.25) + (finalExam * 0.35);

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


float Theater::GetGradeAvg() const    {return avgGrade; }
char  Theater::GetLetterGrade() const {return lettrGrade; }
float Theater::GetFinalExam() const {return finalExam; }





// Member Data 
    // float participation;                                // 40% of the grade 
    // float midterm;                                      // 25% of the grade
    // float finalExam;                                    // 35% of the grade
    // avgGrade
    // lettrGrade
