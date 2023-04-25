#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  pair<int,int> p = {1,2};
  pair<int,int> p2 = make_pair(2,3);
  
  cout<<p.first<<"  "<<p.second<<endl; 

  pair<int, pair<int,int>> p2 = {13,{11,12}};
  cout<<p2.first<<endl;

  pair<int,char> arr[] = {{100,'a'},{2,'b'}};
  cout<<arr[1].first;
}