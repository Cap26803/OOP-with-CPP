#include<iostream>
using namespace std;

void getQuotient(){
    int n1,n2,res;
    cout<<"Enter n1 and n2: "<<endl;
    cin>>n1>>n2;

    if(n2==0){
            throw 10;       //throw any primitive/object
 
        }
        res=n1/n2;
        cout<<"Result: "<<res<<endl;
}
int main(){
    try{
        getQuotient();
    }
    catch(const char* x){
        cout<<"Error: "<<endl;
    }
    return 0;
}