#include <bits/stdc++.h>

using namespace std;

int main(){
  long n;
  cin >> n;
  long a[n];
  for(long i=0; i<n; i++)
    cin >> a[i];
  sort(a, a+n);
  long r = 1;
  for(long i=0; i<n; i++){
    if(a[i]>r)
      i = n;
    else
      r += a[i];
  }
  cout << r << "\n";
}

// 1 2 2 7 9


//1 2 2 5 10

//1 1 2 
