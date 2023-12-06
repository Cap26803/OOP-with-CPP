// Write a C++ program to model a point object in a 2D plane

#include<iostream>
using namespace std;

class point{
public:
    int xcord;
    int ycord;

    point();
    point(int a, int b);
    point(const point& obj);
    void move(int a, int b);
    void reset();
    void print();
};
point::point(){                         //Default Constructor
    xcord=0;
    ycord=0;
}
point::point(int a, int b){             //Parameterized Constructor
    xcord=a;
    ycord=b;
}
point::point(const point& obj){         //Copy Constructor
    xcord=obj.xcord;
    ycord=obj.ycord;
}

void point::move(int a,int b){
    xcord=b;
    ycord=a;
}

void point::reset(){
    xcord=0;
    ycord=0;
}

void point::print(){
    cout<<xcord<<" "<<ycord<<endl;
}

int main(){
    point p1(12,30);
    point p2;

    p1.print();

    p2.move(2,3);
    p2.print();
}
