#include <iostream>
#include <cctype>    
#include "../include/StudentList.h"

using namespace std;

void showMenu() {
    cout << "\n*** Student List menu ***\n";
    cout << "I       Import students from a file\n";
    cout << "S       Show student list (brief)\n";
    cout << "E       Export a grade report (to file)\n";
    cout << "O       sOrt student list \n";
    cout << "M       Show this Menu\n";
    cout << "Q       Quit Program\n";
}

int main() {
    StudentList studentList;
    char option;

    // First time the menu is shown
    showMenu();

    do {
        cout << "> ";
        cin >> option;
        option = tolower(option);

	cin.ignore();

        switch (option) {
            case 'i': {
                // Import students from file
                cout << "Enter filename: ";
                string filename;
                getline(cin, filename); // Using getline to avoid issues with spaces in filenames
                if (studentList.ImportFile(filename.c_str())) {
                    cout << "Students imported successfully.\n";
                } else {
                    cout << "Invalid file. No data imported.\n";
                }
                break;
            }
            case 's': {
                // Show the student list (brief)
                studentList.ShowList();
                break;
            }
            case 'e': {
                // Export grade report to file
                cout << "Enter filename: ";
                string filename;
                getline(cin, filename); // Again, use getline for filename input

                if (studentList.CreateReportFile(filename.c_str())) {
                    cout << "Grade report exported successfully.\n";
                } else {
                    cout << "Error: Unable to export the grade report.\n";
                }
                break;
            }
            case 'm': {
                // Show the menu again
                showMenu();
                break;
            }
            case 'o': {
                // Sort the list 
                studentList.Sort();
                break;
            }
            case 'q': {
                // Quit the program
                cout << "Goodbye!\n";
                break;
            }            
            
            default:
                cout << "Invalid option. Please try again.\n";
            }
            cout << endl << endl;

    } while (option != 'q');

    return 0;
}
