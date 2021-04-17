#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  vector<int>arr;
  int in;
  cin >> x;
  
  for(int i=0; i<x-1; i++){
    cin >> in;
    arr.push_back(in);
  }
  
  sort(arr.begin(), arr.end());
  if(*(arr.end()-1)!=x)
    cout << x << "\n";
  else{
    for(auto it = arr.end(); it!=arr.begin(); it--){
      auto tmp = it;tmp--;
        if( *tmp-1 != *--tmp)
        cout << *tmp+1 << "\n";
    }
  }

}
