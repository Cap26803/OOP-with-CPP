#include<iostream>
using namespace std;

int main(){
    int n1,n2,res;
    cout<<"Enter n1 and n2: "<<endl;
    cin>>n1>>n2;

    try{
        if(n2==0){
            throw "divided by 0";       //throw any primitive/object
        }
        res=n1/n2;
        cout<<"Result: "<<res<<endl;
    }
    catch(const char* x){
        cout<<"Error: "<<x<<endl;
    }
    return 0;
}