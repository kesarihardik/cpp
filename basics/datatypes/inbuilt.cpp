#include <iostream>
#include <climits>
using namespace std;

int main(){
    std::cout<<INT_MIN<<" "<<INT_MAX<<std::endl;

    short a = 2;
    bool x = true;
    cout<<" short size -"<<sizeof(a)<<endl;
    cout<<" int size - "<<sizeof((int)3)<<endl;
    cout<<" bool size "<<sizeof(x)<<endl;
}