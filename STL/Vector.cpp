#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.pop_back();
    v.emplace_back(4);   
   

    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }

    cout<<v.size()<<endl;
    cout<<v.back()<<endl;

    v.clear();               //v.erase(v.begin(),v.end())


//insert at
    vector<int> v2(2,100);
    v2.insert(v2.begin(),30);
    v2.insert(v2.end(),v2.begin(),v2.end());

    for(auto it : v2)
    cout<<it<< " ";
    cout<<endl;


}