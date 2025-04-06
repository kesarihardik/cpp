#include <iostream>
using namespace std;

//access modifier types - public, private, protected. default type is private.
//accessibility of members can be modified while inheriting or by hiding.

class A{
    private:     //private members are accessible to class only. 
        int x;
        void foo(){};

    public:
        int z;
        void zoo(){
            cout<<"A::zoo()"<<endl;
        }

    protected:
        int y;
        virtual void moo()=0;
};

class B: protected A {
    public:
        using A::y;       //make members public
        using A::z;

        void zoo(){
            cout<<"B::zoo()"<<endl;        //hides A::zoo()
        }

        void moo() override{
            cout<<"B::moo()"<<endl;
        }
};

int main(){
    B b;
    b.y = 3;       
    b.z = 4;
    b.moo();         //static binding even though moo is virtual.
    b.zoo();
}