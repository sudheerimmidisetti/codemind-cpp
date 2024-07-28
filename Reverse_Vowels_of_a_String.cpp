#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main() {
    string s;
    std::cin >> s;
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (isVowel(s[i]) && isVowel(s[j])) {
            swap(s[i], s[j]);
            i++;
            j--;
        } else if (!isVowel(s[i])) {
            i++;
        } else {
            j--;
        }
    }
    std::cout << s;
}