#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 list<int> l ;
 l.push_front(1);
 l.push_front(2);
 l.push_back(100);
 l.push_back(122);

 for(auto it : l)
  cout<<it<<" ";

  cout<<endl;

}