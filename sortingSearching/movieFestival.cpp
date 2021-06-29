#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> &x, pair<int, int> &y){
  return x.second < y.second;
}

int main(){
  int n;
  cin >> n;
  int a[n];
  int b[n];
  vector<pair<int, int>> arr;
  for(int i=0; i<n; i++){
    cin >> a[i] >> b[i];
    arr.push_back({a[i], b[i]});
  }
  sort(arr.begin(), arr.end(), comp);
  int i=0, j=1;
  int cont=1;
  while( i<n && j<n ){
    if(arr[i].second<= arr[j].first){
      cont++;
      i=j;
      j++;
    }else
      j++;
  }
    cout << cont << "\n";
}
// 201 457 699 525 795 404 832 800 690 461
// 255 601 804 819 860 882 932 933 974 978        




