#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    ch=tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' ||  ch=='o' || ch=='u');
}
int main() {
    string s;
    cin >>s;
    int c=0,maxi=-1;
    for(int i=0; i<s.size(); i++) {
        if(isVowel(s[i]))     c++;
        else {
            if(c>maxi) {
                maxi=c;
            }
            c=0;
        }
    }
    if(c>maxi) {
        maxi=c;
    }
    cout <<maxi;
}