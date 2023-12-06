// Array as instance variable of a class

#include<iostream>
using namespace std;
class test{
public:
        int *data;
        test(int d[]){          // Array name is pointer
        data=d;                 // Assigning array to pointer
        }
        void printData(int n){
        int i;
        for(i=0;i<n;i++)
            cout<<data[i]<<endl;
        }
};
int main()
{
    int a[5]={1,2,3,4,5};
    test obj(a);

    obj.printData(5);
    return 0;
}
