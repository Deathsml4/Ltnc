#include <iostream>

using namespace std;

bool xau_doi_xung (string s){
	int n = s.length();
	for (int i = 0 ; i < n/2 ; i ++){
		if (s[i] != s[n-1 - i]) return 0;
	}
	return 1;
}

int main(){
	string s;
	cin >> s;
	cout << (xau_doi_xung(s) ? "Yes":"No" );
	
	return 0;
}
