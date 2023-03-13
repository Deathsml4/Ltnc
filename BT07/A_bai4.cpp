#include <iostream>

using namespace std;

int binary_search (int* a, int i, int j, int x){
	if (a[i] > x || a[j] < x) return -1;
	int mid = (i+j)/2;
	if (a[mid] == x){
		return mid;
	} 
	else if (a[mid] > x){
		return binary_search (a,i,mid-1,x);
	}
	else return binary_search (a,mid+1,j,x);
}

int main(){
	int* a = new int [10];
	for (int i = 0 ; i < 10; i++){
		cin >> a[i];
	}
	int k;
	cin >> k;
	cout << binary_search (a,0,9,k);
	return 0;
}
