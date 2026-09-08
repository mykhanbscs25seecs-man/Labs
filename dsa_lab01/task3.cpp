#include <iostream>

// Class definition above main()
class Student {
public:
    int rollNumber;
    int marks;

    void display() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    // Create objects s1 and s2
    Student s1;
    Student s2;

    // Assign values using the dot operator
    s1.rollNumber = 1;
    s1.marks = 75;

    s2.rollNumber = 2;
    s2.marks = 90;

    // Display initial values
    s1.display();
    s2.display();

    // Experiment: Modify s1.marks only
    s1.marks = 80;

    // Display both objects again
    s1.display();
    s2.display();

}
