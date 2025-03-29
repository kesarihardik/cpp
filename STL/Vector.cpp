#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v(5,0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.pop_back();
    v.emplace_back(4);  
    
    // v.front();
    // v.back();
    // v.capacity();
    // v.erase(v.begin(), v.begin()+2);  //erase first two elements
    // v.clear();               //v.erase(v.begin(),v.end())

    // vector<int> v1(v) //copy constructor

    // for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
    //     cout<<*it<<" ";
    // }

    // for(auto it = v.begin(); it!=v.end(); it++){
    //     cout<<*it<<" ";
    // }
   
    // for(auto it: v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    // cout<<v.size()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.front()<<endl;

    vector<int> v2(2,100);   
    v2.insert(v2.begin(), 30);
    v2.insert(v2.end(), v.begin(), v.end());
    
    sort(v2.begin(), v2.end(), greater<>());
    reverse(v2.begin(),v2.end());

    for(const auto &it : v2)
        cout<<it<< " ";
        
    cout<<endl;
    cout<<*max_element(v2.begin(), v2.end())<<endl;
    cout<<*lower_bound(v2.begin(), v2.end(), 4)<<endl;

    if( binary_search(v.begin(), v.end(), 4) ){
       auto lb = lower_bound(v2.begin(), v2.end(), 4);
       cout<<"found element at index "<<lb-v2.begin()<<endl;
    }
    
    vector<pair<int,int>> vv;
    vv.push_back({1,10});
    vv.push_back({2,20});
    vv.push_back({3,30});
    vv.push_back({3,50});
    vv.push_back({4,50});

    sort(vv.begin(), vv.end(), [](const auto &a, const auto &b){
        if(a.second == b.second) return a.first<b.first;
        return a.second>b.second;         //decreasing order
    });
    for(const auto &it: vv)
      cout<<it.first<<" "<<it.second<<endl;
   
    return 0;
}