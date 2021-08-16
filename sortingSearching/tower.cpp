#include <bits/stdc++.h>

using namespace std;

int main(){
  long n;
  cin >> n;
  long arr[n];
  vector<long> v;
  for(int i=0; i<n; i++)
    cin >> arr[i];
  long x = 0;
  v.push_back(arr[x]);
  x++;
  while(x!=n){
    auto it = upper_bound(v.begin(), v.end(), arr[x]);
    if( it == v.end() )
      v.push_back(arr[x]);
    else
      *it = arr[x];
    x++;
  }
  cout << v.size();

}
