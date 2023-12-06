#include <iostream>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    string usn;
    float cgpa;

public:
    Student();
    Student(int roll_no, string& name, string& usn, float
            cgpa);
    void displayStudent();
    void displayMaxCgpaStudent(Student students[], int n);
    void displayStudents(Student s[], int n);
};

Student::Student() {
    cin >> roll_no >> name >> usn >> cgpa;
}

Student::Student(int roll_no, const string& name, const string& usn, float cgpa) {
    this->roll_no = roll_no;
    this->name = name;
    this->usn = usn;
    this->cgpa = cgpa;
}

void Student::displayStudent() {
    cout << "Roll No: " << roll_no << " Name: " << name << " USN: " << usn << " CGPA: " << cgpa << endl;
    cout << endl;
}

void Student::displayMaxCgpaStudent(Student students[], int n) {
    int m;
    float max = 0.0;
    for (int i = 0; i < n; i++) {
        if (students[i].cgpa > max) {
            m = i;
            max = students[i].cgpa;
        }
    }
    cout << "MAX CGPA" << endl;
    students[m].displayStudent();
}

void Student::displayStudents(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        s[i].displayStudent();
    }
}

int main() {
    Student s(1001, "a", "123", 9.5);
    s.displayStudent();

    Student s1(1002, "a", "123", 5.9), s2(1003, "a", "123", 6.5), s3(1004, "a", "123", 7.5);
    Student students[] = { s1, s2, s3, s };
    s.displayStudents(students, 4);
    s.displayMaxCgpaStudent(students, 4);

    return 0;
}

