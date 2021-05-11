#include <bits/stdc++.h>

using namespace std;

void solve(string s){
  unordered_map<char, int> p;
  int cont=0;
  char oddChar ;
  for(int i=0; i<s.length(); i++)
    p[s[i]]++;
  
  for(auto c : p){
    if(c.second % 2 !=0){
      cont++; 
      oddChar = c.first;
    }
  }
  if(cont > 1)
    cout << "NO SOLUTION \n";
  else{
    string firstHalf = "";
    string secondHalf = "";
    for(auto c : p){
      string tmp(c.second/2 , c.first);
      firstHalf = tmp + firstHalf;
      secondHalf = secondHalf + tmp; 
    }
    if(cont == 1)
      firstHalf = firstHalf + oddChar;
    cout << firstHalf + secondHalf << "\n";
  }
}

int main(){
  string s;
  cin >> s;
  solve(s);
}
