#include <iostream>
using namespace std;

//union - datatype that allow different datatypes to share same memory.
union Number{
    short shortVal;
    int intVal;
    double doubleVal;
};

int main(){
    Number x ;
    cout<<"size of "<<sizeof(x)<<endl;  //union allocates size corresponding to largest member.

    x.intVal = 2;
    x.doubleVal = 2.44;         //since values share memory, other values are overwritten on changing one.
    cout<<"double val address: "<<&(x.doubleVal)<<",val: "<<x.doubleVal<<endl;
    cout<<"int val address: "<<&(x.intVal) <<",val: "<<x.intVal<<endl;

    return 0;
}