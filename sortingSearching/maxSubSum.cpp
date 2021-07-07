#include <bits/stdc++.h>

using namespace std;

int main(){
  long n;
  cin >> n;
  long a[n];
  long maior = LONG_MIN;
  long m=0;
  long tmp = 0;
  for(long i=0; i<n; i++)
    cin >> a[i];
  long i=0;
  while(i<n){
    tmp = a[i]; 
    if(tmp>m && m<=0)  
      m = tmp;
    else
      m += tmp;
    
    if(m>maior)
      maior = m;
    i++;
  }
  cout << maior << "\n";
}
