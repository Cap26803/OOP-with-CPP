#include<iostream>
using namespace std;

template<typename data1, typename data2>
data1 addData(data1 x, data2 y){
    return (x+y);
}
int main(){
    int num1=10, num2=10, result=0;
    cout<<"result= "<<addData(num1,num2)<<endl;
    cout<<"result= "<<addData(10.1f,12.0f)<<endl;
    cout<<"result= "<<addData(12.3,11.2)<<endl;

    return 0;
}