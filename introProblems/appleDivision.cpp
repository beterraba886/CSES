#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  vector<long> a;
  long long input=0;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> input;
    a.push_back(input);
  }
  int limit = (1<<n);
  long long ans = 1e18; 
  for(int i=0; i<limit; i++){
    long long x=0, y=0;
    for(int j=0; j<n; j++){
      if( ((1<<j) & i) > 0)
        x += a[j];
      else 
        y += a[j];
    }
    long long op = abs(x-y);
    ans = min(ans, op);
  }
  cout << ans << "\n"; 
  return 0;
}
