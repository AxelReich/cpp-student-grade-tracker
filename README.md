GradeSystem
Overview
The GradeSystem project is a simple C++ application that manages student grade reports for various courses. It demonstrates the use of object-oriented programming concepts such as inheritance, polymorphism, and dynamic memory management. The application supports multiple student types, including Biology, Theater, and Computer Science students.


<img width="455" alt="Screenshot 2024-11-25 at 8 52 13 PM" src="https://github.com/user-attachments/assets/e9a7055b-8975-4729-984a-cd6d67791409">


Features:
Import student data: Read student details from a file.
Dynamic memory management: Create and store students dynamically based on their course type.
Polymorphism: Use virtual functions to handle different student types through a unified interface.
Grade report generation: Display or export detailed reports of student performance.
How to Build and Run
Prerequisites
A C++ compiler that supports C++11 (e.g., g++ or clang++).
A Unix-like environment (Linux, macOS, or WSL on Windows).
make build tool.
Build Steps
Clone or download the repository.

Navigate to the project directory:

bash
Copy code
cd GradeSystem
Build the project:

bash
Copy code
make
This will create:

Object files in the build/ directory.
The final executable student_program in the bin/ directory.
Run the program:

bash
Copy code
./bin/student_program
Targets in the Makefile
Default (make): Compiles the entire project and produces the executable.
make students: Compiles only the object files and places them in the build/ directory.
make clean: Removes all compiled files (build/ and bin/).
File Input Format
The application expects student data in a specific format when importing from a file:

plaintext
Copy code
<number_of_students>
<last_name>,<first_name>
<course_type>
<grades>
<last_name>,<first_name>
<course_type>
<grades>
...
Example Input
plaintext
Copy code
3
Doe,John
Biology
85 90 78 85 92
Smith,Jane
Theater
88 76 94
Brown,Charlie
Computer Science
80 85 78 90 92 85 88 86 91
Key Classes
Student (Base Class)

Contains common attributes like name and course type.
Provides a virtual method to calculate grades.
BiologyStudent, TheaterStudent, ComputerScienceStudent (Derived Classes)

Inherit from Student.
Override methods to handle course-specific grade calculations.
StudentList

Manages a dynamic array of Student objects.
Handles importing data, resizing the array, and managing memory.
Future Enhancements
Add a graphical user interface (GUI) for better usability.
Extend the grading system to include more student types and course categories.
Add unit tests in the tests/ directory to ensure program correctness.

Author
Axel Reich
A passionate Computer Science student exploring object-oriented programming and software design.

