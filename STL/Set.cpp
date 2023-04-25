#include<iostream>
#include<bits/stdc++.h>
#include <set>
using namespace std;

//set - unique values & sorted . values are immutable
//unordered_set
 // multiset - duplicate values

int main(){

unordered_set<char> vowels ;

//insert
vowels.insert('a');
vowels.insert('e');
vowels.insert('i');
vowels.insert('o');
vowels.insert('u');

cout<<"size : "<<vowels.size()<<endl;

for( unordered_set<char>::iterator it = vowels.begin(); it !=vowels.end();it++){
  cout<<* it<<" ";
}
cout<<endl;


//check if present
if(vowels.find('i') != vowels.end()) cout<<"i is present."<<endl;

//erase and clear. 
//vowels.erase(vowels.begin(),vowels.find('i'));     // bigger limit not inclusive //use this with sorted set only
vowels.erase('i');

cout<<"size: "<<vowels.size();
for(auto i : vowels){
    cout<<i<<" ";
}

//check if empty
cout<<endl;
cout<<"Is empty: "<<vowels.empty();

vowels.clear(); 

return 0;
}