#include<iostream>
#include<unordered_map>
using namespace std;

//map - stores key-value pair
//unordered map - no duplicates and no ordering

int main(){

//insert
  unordered_map<int,int> mp;
  mp.insert({1,1});
  mp[2]=4;
  mp.insert(make_pair(3,9));
  mp.insert({4,16});

   // traversal
  // for(unordered_map<int,int> :: iterator itr = mp.begin();itr!= mp.end();itr++)
  //   cout<<(*itr).first<<" "<<itr->second<<endl;
  
   for(auto& it : mp)   cout<<it.first<<" "<<it.second<<endl;
  
// size and count
  cout<<mp.size()<<endl;
  cout<<"count "<<mp.count(1)<<endl;

  //find
  if(mp.find(3)!=mp.end()) 
    cout<<"3 present."<<endl;

   //copy
   unordered_map<int,int> mp2(mp);      //copy constructor
   unordered_map<int,int> mp3 ;               
   mp3 = mp;                              //assignment


//erase and clear
  mp.erase(mp.begin(),mp.find(3));          //using position
  mp.erase(3);                          //erase using keys
  mp.clear();

 return 0;
}