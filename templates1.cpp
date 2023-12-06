#include<iostream>
using namespace std;

template<typename data>

void printData(data value){
    cout<<"value= "<<value<<endl;
}
int main(){
    printData("My Data");   //string
    printData('a');         //char
    printData(108);         //int
    printData(108.8f);      //float
    printData(100.01);      //double
    
    return 0;
}