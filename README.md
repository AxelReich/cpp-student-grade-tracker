# Student Grade System

This C++ project manages student data, including importing, exporting, and displaying grade reports for different types of students (e.g., Biology, Theater, Computer Science).

![Student Grade System](images/project-image.png)

## File Structure

The project is organized as follows:

```plaintext
StudentGradeSystem/
├── src/                         # Source files
│   ├── main.cpp                 # Main program with the menu loop
│   ├── Student.cpp              # Base class implementation
│   ├── BiologyStudent.cpp       # Derived class implementation
│   ├── TheaterStudent.cpp       # Derived class implementation
│   ├── ComputerScienceStudent.cpp # Derived class implementation
│   ├── StudentList.cpp          # Implementation of the StudentList class
├── include/                     # Header files
│   ├── Student.h                # Base class declaration
│   ├── BiologyStudent.h         # Derived class declaration
│   ├── TheaterStudent.h         # Derived class declaration
│   ├── ComputerScienceStudent.h # Derived class declaration
│   ├── StudentList.h            # Declaration for managing student lists
├── data/                        # Input and output data files
│   ├── test1.txt                # Example input file 1
│   ├── test2.txt                # Example input file 2
│   ├── output.txt               # Example output file (grade report)
├── build/                       # Compiled object files
│   ├── (Generated during compilation)
├── bin/                         # Executable files
│   ├── StudentGradeSystem       # Final executableq
├── Makefile                     # Build automation
├── README.md                    # Project documentation


Features:
  - Import student data from a file.
  - Display a list of students and their grades.
  - Export grade reports to a file.
  - Menu-based user interface for easy navigation.
  - How to Compile
  - To compile the project, follow these steps:

Clone the repository to your local machine:

git clone https://github.com/username/StudentGradeSystem.git

Navigate to the project directory:
cd StudentGradeSystem

Build the project using the provided Makefile:
make

This will compile the source code and generate the executable StudentGradeSystem inside the bin/ directory.

How to Run
Once the project is compiled, you can run the executable using the following command:

./bin/StudentGradeSystem
Example Menu
The program will display a menu like this:

*** Student List menu ***
I       Import students from a file
S       Show student list (brief)
E       Export a grade report (to file)
M       Show this Menu
Q       Quit Program
You can select options to import student data, show the list, export the grade report, or display the menu.

Example Files
data/test1.txt: A sample input file with student data.
data/test2.txt: Another sample input file.
data/output.txt: A sample output file for grade reports.
Example Input (test/test1.txt):
plaintext
Copy code
John Doe, 85
Jane Smith, 92
Bob Brown, 76
Example Output (output.txt):
plaintext
Copy code
Student Grade Report:
John Doe: 85
Jane Smith: 92
Bob Brown: 76
The above files are located in the test/ folder in the project directory.

Screenshots
Here are some screenshots from the program:

Importing students from a file:


Displaying the student list:


License
This project is licensed under the MIT License.

Contributions
Feel free to fork the repository and contribute by creating pull requests. Please ensure your code adheres to the coding style and includes appropriate tests where necessary.

Contact
For any issues or questions, please contact axelreich@example.com.

markdown
Copy code

### Changes Made:
1. **Code snippets**: 
   - I made sure all code snippets are enclosed in proper Markdown code blocks (using three backticks for syntax highlighting).
   - I've included the necessary commands to clone the repo, compile the project, and run it.

2. **Clarification of `test/` directory**:
   - I've specified that the input files (`test1.txt`, `test2.txt`) and the output file (`output.txt`) are located in the `test/` folder in the project directory.
