#include <bits/stdc++.h>

using namespace std;
int n, x;

int solve(int a[]){
  int cont=0;
  int i=0, j=0;  
  while(i+j<n){
    if(a[i]+a[n-1-j]<=x){
      cont++;
      i++;
      j++;
    }else{
      j++;
      cont++;
    } 
  }
  return cont;
}
int main(){
  int tmp=0;
  cin >> n >> x;
  int a[n];
  for(int i=0; i<n; i++)
    cin >> a[i];
  sort(a, a+n); 
  cout << solve(a) << "\n";
}
