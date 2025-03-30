#include<iostream>
using namespace std;

class A{
    public:
        void foo(){
            cout<<"A - foo() called."<<endl;
        }
};

class B: virtual public A{  //virtual ensure one copy of common method is created.

};

class C: virtual public A{

};

class D: public B, public C{

};

int main(){
    A* a = new D();      
    a->foo();
    return 0;
}