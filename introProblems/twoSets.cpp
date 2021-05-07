#include <bits/stdc++.h>

using namespace std;
stack<long> s1;
stack<long> s2;
long x1=0;
long x2=0;
void solve(int n){
  if(n>=1){
    if(x1<x2){
      x1+=n;
      s1.push(n);
    }else{
      x2+=n;
      s2.push(n);
    }
    solve(n-1);
  }
}

void printStack(stack<long> *x){
  if(!x->empty()){   
    cout << x->top() << " ";
    x->pop();
    printStack(x);
  }else
    cout << "\n";
}

int main(){
  long n;
  cin >> n;
  solve(n);
  if(x1!=x2)
    cout << "NO\n";
  else{
    cout << "YES\n";  
    cout << s1.size() << "\n";
    printStack(&s1);
    cout << s2.size() << "\n";
    printStack(&s2);
  }
}
