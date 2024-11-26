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
