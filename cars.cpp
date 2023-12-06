#include<iostream>
using namespace std;
class Car{
public:
    int car_no;
    string make;
    string car_model;
    int speed;
    string color;
    //constructor
    Car()
    {
        car_no = 0;
        make = "";
        car_model = "";
        speed = 0;
        color ="";
    }
    //parameter
    Car(int n, string m, string m1, int s, string c):car_no(n),make(m),car_model(m1),speed(s),color(c)
    {
    }
    void printCar()
    {
        cout<<"Car detail"<<endl;
        cout<<car_no<<":"<<make<<":"<<car_model<<":"<<speed<<":"<<color<<endl;
    }
};

int main(){
    int car_no, speed;
    string make, car_model, color;
    cout<<"Enter car number: ";
    cin>>car_no;
    cin.ignore();
    cout<<"Enter make of car: ";
    getline(cin, make);
    cout<<"Enter model of car: ";
    getline(cin, car_model);
    cout<<"Enter speed of car: ";
    cin>>speed;
    cin.ignore();
    cout<<"Enter color of car: ";
    getline(cin, color);

    Car car(car_no, make, car_model, speed, color);
    car.printCar();
    return 0;
}
