#include <bits/stdc++.h>

using namespace std;
long solve(long n, vector<pair<long, long>> arr){
  long cont=1;
  long i=0;
  long pos=-1;
  sort(arr.begin(), arr.end());
  while(i != n){
    if(arr[i].second < pos)
      cont++;
    pos = arr[i].second;
    i++;
  }

  return cont;
}

void swap(pair<long, long> &x, pair<long, long> &y){
  long tmp = x.second;
  x.second = y.second;
  y.second = tmp;
}

int main(){
  long n;
  long s;
  vector<pair<long, long>> arr;
  long cont=1;
  long pos=-1;  
  cin >> n;
  cin >> s;
  for(long i=0; i<n; i++){
    long tmp;
    cin >> tmp;
    arr.push_back({tmp, i});
  }
  for(long i=0; i<s; i++){
    long a, b;
    cin >> a >> b;
    swap(arr[a-1], arr[b-1]);
    cont = solve(n, arr);
    cout << cont << "\n";
  }
}

