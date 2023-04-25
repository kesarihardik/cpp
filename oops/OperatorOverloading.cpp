#include<iostream>
using namespace std;

//operator overloading - compile time polymorphism
//giving special meaning to operators 
//scope resolution, member selection , typeof etc can't be overloaded.


class Complex {
    int real, img;

    public:
     Complex(int real, int img){
        this->real = real;
        this->img = img;
     }

     void print(){
        cout<<real<<"+"<<img<<"i"<<endl;
     }    

     Complex operator+( Complex const& c2){
        return Complex(this->real+c2.real ,this->img + c2.img);
     }
      
};

int main(){

 Complex c1(5,3), c2(2,3);
 Complex c3 = c1 + c2;
 c1.print();
 c2.print();
c3.print();
return 0;
}