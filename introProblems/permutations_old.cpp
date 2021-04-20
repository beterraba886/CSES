#include <bits/stdc++.h>

using namespace std;

int n=0;
vector<int> p;
bool* c;
bool b = false;

bool beautiful(){
  for(auto it = p.begin(); it!=p.end()-1; it++){
    if( *(it)-*(it+1) == 1 || *(it)-*(it+1) == -1)
        return false;
  }
  return true;
}

void solve(){
  if(p.size()==n){ 
    if(beautiful()){  
      b = true;  
      for(auto it = p.begin(); it!=p.end(); it++)
        cout << *it << " ";
      cout << "\n";
    } 
  } else{
    for(int i=1; i<=n && !b; i++){
      if(c[i])
        continue;
      c[i] = true;
      p.push_back(i);
      solve();
      c[i] = false;
      p.pop_back();
    }
  }
}
int main(){
  cin >> n;
  c = new bool[n];
  solve();
  if(!b)
    cout << "NO SOLUTION";
  delete(c);
}

