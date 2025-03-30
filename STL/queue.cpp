#include <iostream>
#include <queue>
using namespace std;

int main(){
  // queue<int> q ;
  // q.push(12);
  // q.pop();

  // queue<int> tmp(q);         //copy constructor
  // while(!tmp.empty()){
  //   cout<<tmp.front()<<endl;
  //   tmp.pop();
  // }

  // deque<int> dq;
  // dq.push_back(12);
  // dq.push_back(13);
  // dq.push_front(-1);
  // dq.pop_back();

  // cout<<dq.front()<<dq.back()<<endl;

  // for(auto it = dq.begin(); it!=dq.end(); it++){
  //   cout<<*it<<endl;
  // }

  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq ;
  pq.push({1,2});
  pq.push({2,2});
  pq.push({3,1});
  pq.push({5,2});

  while(!pq.empty()){
    cout<<pq.top().first<< " "<<pq.top().second<<endl;
    pq.pop();
  }
  
}