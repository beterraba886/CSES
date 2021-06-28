#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  int b[n];
  for(int i=0; i<n; i++)
    cin >> a[i] >> b[i];
  sort(a, a+n);
  sort(b, b+n);
  int i=0, j=0;
  int cont =0;
  int maior=0;  
  while(i<n){
    if(a[i]<b[j]){
      i++;
      cont++;
      if(cont>maior)
        maior = cont;
    }else{
      cont--;
      j++;
    }
  }
  cout << maior << "\n";
}
