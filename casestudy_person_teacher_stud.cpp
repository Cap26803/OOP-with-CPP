#include<stream>
using namespace std;

class Person{
public:
    string fname;
    string lname;
Person(){
    this->fname="";
    this->lname="";
    }
Person(string fname,string lname){
    this->fname=fname;
    this->fname=lname;
    }
    void printPerson(){
    cout<<fname<<":"<<lname<<endl;
    }
};
class Teacher: public Person{
public:
    double salary;
    Teacher():Person(){
    salary=0;
    }
Teacher(string fname,string lname,double salary):Person(fname,lname),salary(salary){
    }
    void printPerson(){
    Person::printPerson();
    cout<<salary<<endl;
    }
};
class Course{
public:
    int courseCode;
    string courseTitle;
    char grade;
    int isa1;
    int isa2;
    int activity;
    //Person *teacher;
    Teacher *teacher;
Course(){
    this->courseCode=0;
    this->courseTitle="";
    }
Course(int courseCode, string courseTitle, int isa1,int isa2, int activity){
    this->courseCode=courseCode;
    this->courseTitle=courseTitle;
    this->isa1=isa1;
    this->isa2=isa2;
    this->activity=activity;
    }
    void printCourse(){
    cout<<courseCode<<":"<<courseTitle<<":"<<teacher->fname<<":"<<isa1<<isa2<<activity<<grade<<endl;
    }
};
class Student:public Person{
public:
    int rollno;
    int sem;
    Course *courses;
    Student():Person(){
    this->rollno=0;
    this->sem=0;
    }
    Student(string fname,string lname,int rollno,int sem):Person(fname,lname){
    Person::printPerson();
    this->rollno=rollno;
    this->sem=sem;
    }
    void printStudent(){
    int i;
    cout<<rollno<<":"<<sem<<endl;
    for(i=0;i<3;i++){
        courses[i].printCourse();
    }
    }
};
