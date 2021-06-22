#include <bits/stdc++.h>

using namespace std;
int n, m ,k;

int solve(int na[], int ma[]){
  int cont=0;
  int i=0, j=0;  
  while(i<n && j<m){
    if(abs(na[i]-ma[j]) <=k){
      i++;
      j++;
      cont++;
    }  
    else if( na[i] <= ma[j]){
      i++; 
    }else{
      j++;
    }
  }
  return cont;
}
//n -> number of applicants
//m-> number of apartments
int main(){
  int tmp=0;
  cin >> n >> m >> k;
  int na[n];
  int ma[m];
  for(int i=0; i<n; i++)
    cin >> na[i];
  for(int i=0; i<m; i++)
    cin >> ma[i];
  
  sort(na, na+n); 
  sort(ma, ma+m);
  cout << solve(na, ma) << "\n";
}
