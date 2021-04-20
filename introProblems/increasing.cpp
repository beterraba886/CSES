#include <bits/stdc++.h>

using namespace std;

int main(){
	int n=0;
	int in=0;
	cin >> n;
	int a[n];
	long cont=0;
	for(int i=0; i<n; i++){
	  cin >> in;
	  a[i] = in;
	}
        
        for(int i=0; i<n-1; i++){
          while(a[i]>a[i+1]){
            a[i+1] = a[i+1] + 1;
            cont++;
          }
        }

	cout << cont;
}
