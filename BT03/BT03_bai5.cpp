#include <iostream>

using namespace std;

int main(){
	
	int m, n;
	cin >> m >> n;
	int ** arr = new int* [m];
	for (int i = 0 ; i < m ; i++){
		arr[i] = new int [n];
	}
	
	int num = 1;
	int a = m-1;
	int b = n;
	int i(0) , j(0), s(1);
	while (num != m*n+1){
		for (int y = 0 ; y < b ; y++){
			arr[i][j+y*s] = num++;
			cout << num-1 << " cong1 " <<endl;
		}
		j = j + (b-1) * s;
		i = i + 1*s;
		b--;
		for (int x = 0 ; x < a ; x++){
			arr[i+x*s][j] = num++;
			cout << num-1 << " cong2 " << endl;
		}
		i = i + (a-1) * s;
		j = j - 1*s;
		a--;
		s *= -1;
	}
	
	for (int x = 0 ; x < m ; x++){
		for (int y = 0 ; y < n ; y++){
			cout << arr[x][y] << " ";
		}
		cout << endl;
	}
	return 0;
}
