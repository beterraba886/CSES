#include <bits/stdc++.h>

using namespace std;

long solve(long y, long x){
  long b=0;
  long a=1;
  long w=0;
  if(y>x){
    if(y%2==0){
      b = y*y;
      a=-1;
    }
    else
      b = (y-1)*(y-1)+1;
    w=x;
  }else{
    if(x%2!=0){
      b = x*x;
      a=-1;
    }else
      b = (x-1)*(x-1)+1;
    w=y;
  }
  for(int i=1; i<w; i++)
    b += a;
  return b;
}
int main(){
  int n;
  long x, y;
  cin >> n;
  while(n--){ 
    cin >> y;
    cin >> x;
    cout << solve(y, x) << "\n";
  }
}
