#include <bits/stdc++.h>

using namespace std;

long solve(long n){
  if(n>=1)
    return 2*solve(n-1)%1000000007;
  else
    return 1;
}

int main(){
  int n=0;
  cin >> n;
  long bs = solve(n);
  cout << bs << "\n";
}
