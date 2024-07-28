#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    std::cin >>s;
    int count = 1;
    int max_count = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i+1]) {
            count++;
            max_count = std::max(max_count, count);
        }
        else {
            count = 1;
        }
    }
    std::cout <<max_count;
}