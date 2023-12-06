#include<iostream>
using namespace std;
class Student{
private:
    int roll_no;
    string name;
    string usn;
    float cgpa;
public:
    Student(){
    cin>>roll_no>>name>>usn>>cgpa;
    }
    Student(int roll_no, string name, string usn, float cgpa){
    this->roll_no=roll_no;
    this->name=name;
    this->usn=usn;
    this->cgpa=cgpa;
    }
    void displayStudent(){
    cout<<"Roll No:"<<roll_no<<"name:"<<name<<"USN:"<<usn<<"CGPA:"<<cgpa<<endl;
    cout<<" "<<endl;
    }
    void displayMaxCgpaStudent(Student students[],int n)
    {
        int i,m;
        float max=0.0;
        for(i=0;i<n;i++)
            if(students[i].cgpa>max){
                m=i;
                max=students[i].cgpa;
            }
            cout<<"MAX CGPA"<<endl;
            students[m].displayStudent();
    }
    void displayStudents(Student s[],int n){
    int i;
    for(i=0;i<n;i++)
        s[i].displayStudent();
    }
};
int main(){
//Student s(1001,"a","123",5.5);
Student s;
s.displayStudent();
Student s1(1002,"a","123",5.9),s2(1003,"a","123",6.5),s3(1004,"a","123",9.5);
Student students[]={s,s1,s2,s3};
s.displayStudents(students,4);
s.displayMaxCgpaStudent(students,4);
return 0;
}
