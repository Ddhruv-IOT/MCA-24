#include <iostream>
#include <string>
using namespace std;

// Define a Student class
class Student {
private:
    // Data members (Attributes)
    string name;
    int rollNumber;
    float marks;

public:
    // Member function to set student details
    void setDetails(string studentName, int studentRollNumber, float studentMarks) {
        name = studentName;
        rollNumber = studentRollNumber;
        marks = studentMarks;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create a student object
    Student student1;

    // Set and display student1 details
    student1.setDetails("John Doe", 101, 85.5);
    student1.displayDetails();

    return 0;
}
