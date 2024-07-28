#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    std::cin >> s;
    string str="";
    for(int i=0; i<s.size(); i++) {
        if(s[i]!='.') {
            str+=s[i];
            if(s[i+1]=='.') str+='[';
        }
        else {
            str+='.';
            str+=']';
        }
    }
    std::cout << str;
    return 0;
}