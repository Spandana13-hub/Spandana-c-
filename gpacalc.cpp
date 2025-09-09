#include <iostream>
using namespace std;

class Student {
private:
    int n; // number of subjects

public:
    // Constructor to take number of subjects
    Student(int subjects) {
        n = subjects;
    }

    // Function to calculate GPA
    void calculateGPA() {
        float totalPoints = 0, totalCredits = 0;

        for (int i = 0; i < n; i++) {
            int totalMarks, obtainedMarks, credits;

            cout << "\nSubject " << i + 1 << " total marks: ";
            cin >> totalMarks;

            cout << "Subject " << i + 1 << " obtained marks: ";
            cin >> obtainedMarks;

            cout << "Subject " << i + 1 << " credits: ";
            cin >> credits;

            // percentage
            float percentage = (float)obtainedMarks / totalMarks * 100;

            // GPA on 4.0 scale
            float gradePoint = (percentage / 100) * 4;

            totalPoints += gradePoint * credits;
            totalCredits += credits;
        }

        float gpa = totalPoints / totalCredits;

        cout << "\n==============================\n";
        cout << "Final GPA (out of 4.0) = " << gpa << endl;
        cout << "==============================\n";
    }
};

int main() {
    int subjects;
    cout << "Enter number of subjects: ";
    cin >> subjects;

    Student s(subjects);   // Object created with constructor
    s.calculateGPA();      // Calculate GPA
    return 0;
}
