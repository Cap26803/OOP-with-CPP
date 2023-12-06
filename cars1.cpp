#include <iostream>
using namespace std;

class Car
{
public:
    		int carNo;
    		string make;
    		string model;
    		int speed;
    		string color;
    
//Default constructor
    		Car()
{
    			carNo=0;
    			make="";
    			model="";
    			speed=0;
    			color="";
    		}
   //parameterized constructor
    		Car(int n, string m, string m1,int s, string c):carNo(n),make(m),model(m1),speed(s),color(c)
    {

    }
    Car(int n,string m):carNo(n),model(m){}

    void printCar()
{
    cout<<"Car details"<<endl;
    cout<<carNo<<":"<<make<<":"<<model<<":"<<speed<<":"<<color<<endl;
    }
};

int main()
{
Car car(1234,"TATA","Altroz",0,"white");
car.printCar();

car.speed=100;
car.printCar();

//other object

Car car1;
car1.printCar();

//other object

Car car2(4567,"Tiago");
car2.printCar();

return 0;
}
