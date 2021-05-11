#include <bits/stdc++.h>

using namespace std;

vector<string> a;

void solve(int n){
  if(n>1){
    for(int i = a.size()-1; i>=0; i--)
      a.push_back(a[i]);

    for(int i=0; i < a.size()/2; i++)
      a[i] = "0" + a[i];
    
    for(int i=a.size()/2; i<a.size(); i++)
      a[i] = "1" + a[i];

    solve(n-1);
  }else{
    for(auto c : a)
      cout << c << "\n";
  }  
}

int main(){
  int n;
  cin >> n;
  a.push_back("0");
  a.push_back("1");
  solve(n);
}
