#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >>y;
    int k = x + 1-y;
    if(k>=0 && k % 9 ==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
  }
  return 0;
}