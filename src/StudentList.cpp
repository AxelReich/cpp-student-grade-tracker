#include <fstream>
#include <sstream>
#include <iomanip>

#include "../include/Student.h"
#include "../include/Biology.h"
#include "../include/ComputerScience.h"
#include "../include/Theater.h"


#include "../include/StudentList.h"



    // Constructor
StudentList::StudentList()                      // Make a empty list 
{
    currSize = 0;
    students = nullptr;
}              
    // Destructor 
StudentList::~StudentList()                  // Deallocate data 
{
    for (int i = 0; i < currSize; ++i){
        delete students[i];                  // Delete each dynamically allocated Student object, because each [i] would be a pointer
    }
    delete[] students;                       // Delete the array of pointers
}

bool StudentList::ImportFile(const char* filename)      // Import the file .txt, if file not valid: return false;
{

    string filePath = "test/" + string(filename);

    // Open the file, return false if it can't be opened
    ifstream file(filePath);
    if (!file.is_open()) {
        return false;  // Return false if the file can't be opened
    }

    int numStudents;
    file >> numStudents;  // Read the number of students

    // Resize the array to hold the new students
    int previousSize = currSize;        // Saving this value in case the array is already populated.      
    Resize(currSize + numStudents);

    // Add the new students to the array
    for (int i = 0; i < numStudents; i++) {
        // Variables for student data
        string lastName, firstName, course;
        int g1, g2, g3, g4, g5, g6, g7, g8, g9;

        // Read student data
        file.ignore();  // Clear any leftover newline characters
        getline(file, lastName, ',');  // Read last name (comma separated)
        getline(file, firstName);      // Read first name

        // Read course
        file >> course;


        // Create student objects based on the course
        if (course == "Biology") {
            file >> g1 >> g2 >> g3 >> g4 >> g5;
            students[previousSize + i] = new Biology(firstName, lastName, course, g1, g2, g3, g4, g5);
        }   

        else if (course == "Computer") {
	    file >> course;
            file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7 >> g8 >> g9;
            students[previousSize + i] = new ComputerScience(firstName, lastName, "Computer Science", g1, g2, g3, g4, g5, g6, g7, g8, g9);
        }

        else if (course == "Theater") {
            file >> g1 >> g2 >> g3;
            students[previousSize + i] = new Theater(firstName, lastName, course, g1, g2, g3);
        } 
    }

    file.close();
    return true;
}

bool StudentList::CreateReportFile(const char* filename)    // Create a grade report and write it to an output file, If output file cant open: return false;
{
    string filePath = "test/" + string(filename);
    
    // Open Output File: return false if you cant
    ofstream outFile(filePath);
    if (!outFile.is_open()) {
        cout << "Error: Unable to open file for writing.\n";
        return false;
    }

    //Header of the output file
    outFile << "Student Grade Summary" << endl;
    outFile << "---------------------" << endl << endl;

    // How many times it appears each grade
    int gradeCounter[5] = {0,0,0,0,0};            //A,B,C,D,F

    // Group the courses
    string courses[] = {"Biology", "Theater", "Computer Science"};

    for (int i = 0; i < 3; i++){     // Three times becasue there are only three classes: CS Biology and Theater
        //Header for each of the classes
        string course = courses[i];

        if (course == "Biology"){
            outFile << "BIOLOGY CLASS";
        }
        else if (course == "Computer Science"){
            outFile << "COMPSCI CLASS";
        }
        else if (course == "Theater"){
            outFile << "THEATER CLASS";
        }
        outFile << endl << endl;
        outFile << left << setw(40) << "Student Name"
                << setw(10) << "Final Exam"
                << setw(10) << "Final Avg"
                << "Letter Grade\n";
        outFile << string(70, '-') << endl;


        // Write the datails for this course

        for (int j = 0; j < currSize; j++) {
            if (students[j]->GetCourse() == course) {
                outFile << left << setw(40) << (students[j]->GetLastName() + students[j]->GetFirstName())
                        << setw(10) << students[j]->GetFinalExam()
                        << setw(10) << fixed << setprecision(2) << students[j]->GetGradeAvg()
                        << students[j]->GetLetterGrade() << endl;
                // Update grade array
                char letter = students[j]->GetLetterGrade();
                if (letter == 'A') gradeCounter[0]++;
                else if (letter == 'B') gradeCounter[1]++;
                else if (letter == 'C') gradeCounter[2]++;
                else if (letter == 'D') gradeCounter[3]++;
                else if (letter == 'F') gradeCounter[4]++;
            }
        }
        outFile << endl;
        outFile << endl;
    }

    // Overall Grade Distribution
    outFile << "OVERALL GRADE DISTRIBUTION\n\n";
    outFile << "A:   " << gradeCounter[0] << "\n";
    outFile << "B:   " << gradeCounter[1] << "\n";
    outFile << "C:   " << gradeCounter[2] << "\n";
    outFile << "D:   " << gradeCounter[3] << "\n";
    outFile << "F:   " << gradeCounter[4] << "\n";

    outFile.close();
    return true;
}

void StudentList::ShowList() const             // Print the current list of students, one per line. lastName, firstName, course.
{
    // Header
    cout << left << setw(20) << "Last Name"
         << setw(20) << "First Name"
         << "Course\n";
    cout << string(60, '-') << "\n";  

    // Loop through the list and print student details
    for (int i = 0; i < currSize; i++) {
        cout << left << setw(20) << students[i]->GetLastName()
             << setw(20) << students[i]->GetFirstName()
             << students[i]->GetCourse() << "\n";
    }
}


void StudentList::Resize(int newSize)
{
    //  Check we are only making it larger
    if (newSize <= currSize) {
        return;
    }

    // Allocate new memory for the larger array
    Student** newStudents = new Student*[newSize];

    // Copy old students to the new array
    for (int i = 0; i < currSize; ++i) {
        newStudents[i] = students[i];
    }

    // Delete the old array
    delete[] students;

    // Point to the new array
    students = newStudents;
    currSize = newSize;  // Update the current size
}


