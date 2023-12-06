#include<iostream>
using namespace std;
class student
{
    int a,b;
    string name;
    string usn;
    int marks1;
    int marks2;
    public:
    void set(string n,string u,int marks1,int marks2)
    {
        n=name;
        u=usn;
        a=marks1;
        b=marks2;
    }
    void get()
    {
    cout<<a;
    cout<<b;
    }
};
int main()
{
    student s1;
    s1.set("Chinmay","02FE22BCS403",50,50);
    s1.get();
    return 0;
}
