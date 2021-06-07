#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int cont=0;
  int x=0;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++)
    cin >> a[i];
  sort(a, a+n);
  for(int i=0; i<n; i++){
    if(a[i]!=x){
      cont++;
      x = a[i];
    }
  }
  cout << cont << "\n";
}
