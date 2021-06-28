#include <bits/stdc++.h>

using namespace std;
int n, m;
int main(){
  cin >> n >> m;
  multiset<int, greater<int>> s;
  int ticket;
  int cust;
  for(int i=0; i<n; i++){
    cin >> ticket;
    s.insert(ticket);
  }
  for(int i=0; i<m; i++){
    cin >> cust;
    auto it = s.lower_bound(cust);
    if(it == s.end()){
      cout << -1 << "\n";
    }else{
      cout << *(it) << "\n";
      s.erase(it);
    }
  }
}
