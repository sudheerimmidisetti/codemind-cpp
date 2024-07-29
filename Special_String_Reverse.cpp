#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    while(i<j) {
        if(((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) && ((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z'))) {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        if(!((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))) {
            i++;
        }
        if(!((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z'))) {
            j--;
        }
    }
    cout << s << endl;
}