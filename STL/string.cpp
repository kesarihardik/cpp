#include <iostream>
using namespace std;

int main(){
    string s = "abcde";
    cout<<&s<<endl;
    s = s+"f";
    cout<<&s<<endl;

    cout<<s.substr(1,4)<<endl;  //substring

    if(s.find("abdf")!=string::npos) cout<<"found"<<endl;      //search substring in string
    else cout<<"not found"<<endl;
    
    while(!s.empty() && s.find("bc")!=0){
        s=s.substr(1, s.size()-1);
    }
    cout<<s<<endl;
   
}