#include <iostream>

using namespace std;

int count_even(int*a, int n){
   int count = 0;
   for (int i = 0 ; i < n ; i++){
        if (*(a+i) % 2 == 0) 
		{
			count ++;
		}
   }
   return count;
}

int main()
{
    int n = 10;
    int* a = new int [n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    cout << "5 so dau day co " << count_even(a,5) << " so chan \n";
    cout << "5 so cuoi day co " << count_even (a+n-5,5) << " so chan \n";
    return 0;
}
