#include <bits/stdc++.h>

using namespace std;

int solve(long n){
  int cont=0;
  for(int i=5; n/i>=1; i*=5){ 
    cont += n/i;
  }
  return cont;
}

int main(){
  long n;
  cin >> n;
  cout << solve(n) << "\n";
}
