#include <bits/stdc++.h>

using namespace std;

int main(){
  long n;
  cin >> n;
  long a[n];
  long med=0;
  long cont=0;
  for(long i=0; i<n; i++)
    cin >> a[i];
  sort(a, a+n);
  med = a[(n-1)/2];
  for(long i=0; i<n; i++){
    if(a[i]<med)
      cont += med - a[i];
    else if(a[i]>med)
      cont += a[i] - med;
  }
  cout << cont << "\n"; 
}
