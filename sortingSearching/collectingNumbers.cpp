#include <bits/stdc++.h>

using namespace std;

int main(){
  long n;
  vector<pair<long, long>> arr;
  long cont=1;
  long pos=-1;
  
  cin >> n;
  
  for(long i=0; i<n; i++){
    long tmp;
    cin >> tmp;
    arr.push_back({tmp, i});
  }
  
  sort(arr.begin(), arr.end());
  
  long i=0;
  while(i != n){
    if(arr[i].second < pos)
      cont++;
    pos = arr[i].second;
    i++;
  }
  cout << cont << "\n"; 
}

// 4-0, 2-1, 1-2, 5-3, 3-4

// 1-2, 2-1, 3-4, 4-0, 5-3
