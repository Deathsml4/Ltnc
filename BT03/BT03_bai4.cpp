#include <iostream>

using namespace std;

int main(){
	int m,n;
	cin >> m >> n;
	int a[m+2][n+2];
	char map[m+1][n+1];
	for (int i = 1 ; i <= m ; i++){
		for (int j = 1 ; j <= n ; j++){
			cin >> map[i][j];
		}
	}
	for (int i = 1 ; i < m+2 ; i++){
		for (int j = 1 ; j < n+2 ; j++){
			a[i][j] = 0;
		}
	}
	for (int i = 1 ; i < m+1 ; i++){
		for (int j = 1 ; j < n+1 ; j++){
			if (map[i][j] == '*'){
				a[i-1][j-1] ++;
				a[i+1][j+1] ++;
				a[i-1][j+1] ++;
				a[i+1][j-1] ++;
				a[i][j-1] ++;
				a[i][j+1] ++;
				a[i-1][j] ++;
				a[i+1][j] ++;
			} 
		}
	}
	for (int i = 1 ; i < m+1 ; i++){
		for (int j = 1 ; j < n+1 ; j++){
			if (map[i][j] == '*'){
				a[i][j] = -1;
			} 
		}
	}
	for (int i = 1 ; i < m+1 ; i++){
		for (int j = 1 ; j < n+1 ; j++){
			if (a[i][j] == -1){
				cout << "*" << " ";
			} 
			else cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
