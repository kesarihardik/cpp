#include <iostream>
using namespace std;

void funct1(int x){    
    cout<<"Address of number in pass by value "<<&x<<endl;
}

void funct2(int& x){    
    cout<<"Address of number in pass by reference "<<&x<<endl;
}

void funct3(int *x){
    cout<<"Address of number passed by pointer "<<x<<endl;
}

int main(){
    int num = 5;
    cout<<"Original address of num: " <<&num<<endl;
    funct1(num);

    funct2(num);

    funct3(&num);

}