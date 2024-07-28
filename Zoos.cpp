#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    std::cin >>s;
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }
    if(freq['z']*2==freq['o'])  std::cout <<"Yes" <<std::endl;
    else                        std::cout <<"No" <<std::endl;
}