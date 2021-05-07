#include <bits/stdc++.h>

using namespace std;

long solve(long n){
  //total knights -> n²* (n²-1)
  long t = (n*n) * (n*n-1)/2;//2 pois sao objetos identicos
  
  long o = 4*(n-1)*(n-2);
  return t-o;
}

int main(){
  long k;
  cin >> k;
  for( long i=1; i<=k; i++)
    cout << solve(i) << "\n";
}
