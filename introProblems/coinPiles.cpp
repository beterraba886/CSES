#include <bits/stdc++.h>

using namespace std;

bool solve(int x, int y){
  if(x/2>y || y/2>x)
    return false;
  x = x%3;
  y = y%3;
  return ( (x==y && x==0) || (x-y>=1 && y!=0) || (y-x>=1 && x!=0) ) ;
}

int main(){
  int n;
  int x, y;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> x;
    cin >> y;
    if(solve(x, y))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
