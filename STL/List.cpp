#include <iostream>
#include <list>
using namespace std;

int main(){
 list<int> l  = {12, 14};
 l.push_front(1);
 l.push_front(2);
 l.push_back(100);
 l.push_back(122);

 auto it = l.begin();
 advance(it, 2);
 l.insert(it, 3);

 l.erase(it);
 l.remove(100);

 for(auto it : l)     //for(auto it=l.begin(); it!=l.end(); ++it);
 cout<<it<<" ";

 l.sort();
 l.reverse();
}