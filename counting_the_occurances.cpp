#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    char ch;
    getline(cin, s);
    cin >> ch;
    int c = 0;
    for (int i=0; i<s.size(); i++) {
        if(s[i]==ch) c++;
    }
    if (c==0)     cout << -1 << endl;
    else          cout << c << endl;
}