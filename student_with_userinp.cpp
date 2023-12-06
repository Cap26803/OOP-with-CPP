#include<iostream>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    string usn;
    float cgpa;

public:
    Student() {
        cout << "Enter Roll No, Name, USN, CGPA: ";
        cin >> roll_no >> name >> usn >> cgpa;
    }

    Student(int roll_no, string name, string usn, float cgpa) {
        this->roll_no = roll_no;
        this->name = name;
        this->usn = usn;
        this->cgpa = cgpa;
    }

    void displayStudent() {
        cout << "Roll No: " << roll_no << ", Name: " << name << ", USN: " << usn << ", CGPA: " << cgpa << endl;
        cout << endl;
    }

    void displayMaxCgpaStudent(Student students[], int n) {
        int i, m;
        float max = 0.0;
        for (i = 0; i < n; i++) {
            if (students[i].cgpa > max) {
                m = i;
                max = students[i].cgpa;
            }
        }
        cout << "MAX CGPA" << endl;
        students[m].displayStudent();
    }

    void displayStudents(Student s[], int n) {
        int i;
        for (i = 0; i < n; i++) {
            s[i].displayStudent();
        }
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student* students = new Student[numStudents];
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for Student " << i+1 << endl;
        students[i] = Student();
    }

    Student s;
    s.displayStudent();

    s.displayStudents(students, numStudents);
    s.displayMaxCgpaStudent(students, numStudents);

    delete[] students;
    return 0;
}

