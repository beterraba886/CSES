#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	char c = ' ';
	int cont = 0;
	int maior = 0;
	getline(std::cin, s);
	for(auto it=s.begin(); it!=s.end(); it++){
		if(*it==c)
			cont++;
		else
			cont = 1;
		c = *it;
		if(maior<cont)
			maior = cont;
	}
	cout << maior;
}
