#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cout << sizeof(a) << endl;
    int* b = new int [n];
    cout << sizeof(b) << endl;
    return 0;
}
