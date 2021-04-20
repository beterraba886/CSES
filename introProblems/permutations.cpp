#include <bits/stdc++.h>

using namespace std;

int n=0;
int* a;

int main(){
  int n=0;
  cin >> n;
  if(n!= 1 && n <= 3)
    cout << "NO SOLUTION";
  else{
    for(int i=2; i<=n; i+=2)
      cout << i << " ";
    for(int i=1; i<=n; i+=2)
      cout << i << " ";
  }
}

