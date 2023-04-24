#include <iostream>
using namespace std;

//friend function can access private data fields and functions of a class.
//scope of friend function is not defined by class in which it is declared.

class A{
    int x;
    int y;

    public: 
     A(int x ,int y){
        this->x = x;
        this->y = y;
     }

    friend class B;
    friend int getY(A& obj);
};

//friend class
class B{
    public:
   int getX(A& obj){
    return obj.x ;
   }
};


//friend function
int getY(A& obj){
    return obj.y;
}

int main(){
    A obj(41,3);
    // cout<<A.x;   // x inaccessible
    B frd;
    int x = frd.getX(obj);
    int y = getY(obj);
    cout<<"x :"<<x<<" | y:"<<y;
    return 0;
}