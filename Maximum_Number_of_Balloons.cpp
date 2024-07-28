#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    std::cin >> s;
    int b=0,a=0,l=0,o=0,n=0;
    for(char ch : s) {
        if(ch=='b')   b++;
        if(ch=='a')   a++;
        if(ch=='l')   l++;
        if(ch=='o')   o++;
        if(ch=='n')   n++;
    }
    l/=2;
    o/=2;
    int k=min({b,a,l,o,n});
    std::cout <<k;
}