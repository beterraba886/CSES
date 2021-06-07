#include <bits/stdc++.h>

using namespace std;

void solve(int n, int start, int end){
  if(n==1)
    printf("%d %d\n", start, end);
  else{
    int other = 6 - (start+end);
    solve(n-1, start, other);
    printf("%d %d\n", start, end);
    solve(n-1, other, end);
  }
}

int main(){
  int n;
  int c=1;
  cin >> n;
  for(int i=0; i<n; i++)
    c = c<<1;
  printf("%d\n", c-1);
  solve(n, 1, 3);
}
