#include <bits/stdc++.h>

using namespace std;

int main(){
  long n, x;
  long p1=-1, p2=-1;
  cin >> n >> x; 
  long a[n];
  long b[n];
  long tmp=-1;  
  for(int i=0; i<n; i++){
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a, a+n);
  long i=0, j=n-1;
  
  while(i<j && tmp !=x){
    if(a[i]+a[j]>x)
      j--; 
    else if(a[i]+a[j]<x)
      i++;
    else{
      tmp = a[i] + a[j];
      p1=i;
      p2=j;
    } 
  }
  if(tmp!=x)
    cout << "IMPOSSIBLE\n";
  else{
    long c1=0;
    long c2=n;
    while(b[c1]!=a[p1] || b[c2]!=a[p2]){
      if(b[c1]!=a[p1])
        c1++;
      if(b[c2]!=a[p2])
        c2--; 
    }
    cout << c1+1 << "\n";
    cout << c2+1 << "\n";
  }
}


