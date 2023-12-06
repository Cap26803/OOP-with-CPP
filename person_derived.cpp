#include<iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void getname() {
        cout << "Enter name: " << endl;
        cin >> name;
    }
    void putname() {
        cout << "Name is: " << name << endl;
    }
    virtual void getdata() = 0;
    virtual bool isOutstanding() {
        return false; // Default implementation for base class
    }
};

class Student : public Person {
protected:
    float gpa;
public:
    void getdata() {
        Person::getname();
        cout << "Enter GPA: " << endl;
        cin >> gpa;
    }
    bool isOutstanding() {
        return (gpa > 3.5) ? true : false;
    }
};

class Professor : public Person {
protected:
    int publications;
public:
    void getdata() {
        Person::getname();
        cout << "Enter number of publications: " << endl;
        cin >> publications;
    }
    bool isOutstanding() {
        return (publications > 25) ? true : false;
    }
};

int main() {
    Student s;
    Professor p;
    Person* ptrPerson;

    ptrPerson = &s;
    ptrPerson->getdata();
    bool t = ptrPerson->isOutstanding();
    if (t) {
        cout << "Student is outstanding" << endl;       //it will print only if the student is outstanding
    }

    ptrPerson = new Professor();
    ptrPerson->getdata();
    if (ptrPerson->isOutstanding()) {
        cout << "Professor is outstanding" << endl;
    }

    Person* personArray[2];
    personArray[0] = new Student();
    personArray[1] = new Professor();

    for (int i = 0; i < 2; i++) {
        personArray[i]->getdata();
        if (personArray[i]->isOutstanding()) {
            cout << "Person is outstanding" << endl;
        }
    }
    return 0;
}
