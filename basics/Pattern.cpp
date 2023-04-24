#include <iostream>
using namespace std;

int main(){
//    int n = 4;
//    for(int i = 0; i<n ;i++){
//     for(int j = 0; j<=i;j++){
//         cout<<j+1;
//     }
//     cout<<endl;
//    }


 for(int r = 0; r<=3; r++){
    for(int c=0;c<=r;c++){
        char ch = 'A' + c;
        cout<<ch<<" ";        
    }
    cout<<endl;
 }


}