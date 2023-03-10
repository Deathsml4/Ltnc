#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'beautifulStrings' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts STRING s as parameter.
 */

long beautifulStrings(string s) {
    int len = s.length();
    long count = 0;
    for (int i = 0 ; i < len ; i++){
        if (i == 0 || s[i] != s[i-1]){
            char x = s[i+1];
            for (int j = i+1 ; j < len ; j++){
                if (j==i+1 || x != s[j]){
                    x = s[j];
                    count ++;
                }
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long result = beautifulStrings(s);

    fout << result << "\n";

    fout.close();

    return 0;
