#include <iostream>
#include <utility>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
  pair<int,int> p = {1,2};
  pair<int,int> p2 = make_pair(2,3);
  
  cout<<p.first<<"  "<<p.second<<endl; 

  pair<int, pair<int,int>> p3 = {13,{11,12}};
  cout<<p3.first<<endl;

  //vector of pair
  vector<pair<int, char>> v;
  v.push_back({1,'r'});
  v.push_back({3, 'k'});
  v.push_back({4, 'k'});

  for(const auto &it: v){
    cout<<it.first<<" "<<it.second<<endl;
  }

  //map of pair
  unordered_map<int , pair<int, string>> mp ;
  mp[1] = make_pair(1, 'c');
  mp[2] = {3,"r"};

  for(const auto &it: mp){  
    cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
  }

}