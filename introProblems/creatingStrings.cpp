#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> a;
  int cont=0;
  string in = "";
  
  cin >> in;
  sort(in.begin(), in.end());
  
  do{
    cont++;
    a.push_back(in);
  }while(next_permutation(in.begin(), in.end()));
  
  cout << cont << "\n"; 
  
  for(auto x : a)
    cout << x << "\n";

}
